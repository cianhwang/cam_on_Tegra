/*
Copyright (c) 2017, CenturyArks
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met: 

1. Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer. 
2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution. 

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

The views and conclusions contained in the software and documentation are those
of the authors and should not be interpreted as representing official policies, 
either expressed or implied, of the FreeBSD Project.
*/

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <mqueue.h>
#include <linux/limits.h>
#include "demo_control.h"


/***************************************************************
 *  Global variable for DEMO Control
 **************************************************************/
pthread_t afc_thread;
int run_afc_thread;
int abort_afc_thread;
int g_div_x;
int g_div_y;
int g_width;
int g_height;
int g_sensor_id;
int g_fps;
char PathPreview[PATH_MAX]      = "/home/nvidia/demo/script/preview.sh";
char PathStill12M_NML[PATH_MAX] = "/home/nvidia/demo/script/stillCapture12M_Normal.sh";
char PathStill12M_HDR[PATH_MAX] = "/home/nvidia/demo/script/stillCapture12M_HDR.sh";
char PathHighspeed[PATH_MAX]    = "/home/nvidia/demo/script/highspeed.sh";


/*******************************************************************************
 * @brief   Initialize Demo software
 *
 * @param   void
 *
 * @return  Success 1
 ******************************************************************************/
int DemoInit(int flag)
{
    printf("Demo Initialize\n");

    //char command[COMMAND_MAX];
    //int ret;

    g_sensor_id = GetSensID();

    i2c_open(g_sensor_id);

    g_width  = GetWidth();
    g_height = GetHeight();
    g_div_x  = GetPDAFWidth();
    g_div_y  = GetPDAFHeight();
    g_fps    = GetFPS();

    //ReadSettingFile();

    //MessageQueueSend("quit");

    //sprintf(command, "%s %d %d %d %d &", PathPreview, g_sensor_id, g_width, g_height, g_fps);
    //ret = system(command);
    //if (ret != 0)
    //{
    //    printf("[Error]: %s (ret=%d)\n", command, WEXITSTATUS(ret));
    //}

    //usleep(1000 * 1000);

    printf("Demo Start\n");
	
    if (flag){
        OIS_Init(); //required in initialized step.
    }
    return 1;
}

/*******************************************************************************
 * @brief   Exit Demo software
 *
 * @param   void
 *
 * @return  Success 1
 ******************************************************************************/
int DemoExit()
{
    MessageQueueSend("quit");

    return 1;
}

/*******************************************************************************
 * @brief   Control Demo software
 *
 * @param   commandLine     Command line
 *
 * @return  Success 1, Failure -1
 ******************************************************************************/
int DemoControl(char *commandLine)
{
    char command[COMMAND_MAX];
    int ret;
    int mode = 0;
    int afPosition = 0x200;

    if (strcmp(commandLine, "lsc 1") == 0)
    {
        SetLSC(1);
        printf("lsc on\n");
    }
    else if (strcmp(commandLine, "lsc 0") == 0)
    {
        SetLSC(0);
        printf("lsc off\n");
    }
    else if (strstr(commandLine, "af 1") != 0)
    {
        SetPDAF(g_width, g_height, g_div_x, g_div_y);

        usleep(FOCUS_WAIT * 1000);
        DirectMode();
        usleep(FOCUS_WAIT * 1000);

        run_afc_thread = 1;
        ret = pthread_create(&afc_thread, NULL, AFCThread, NULL);
        if (ret)
        {
            printf("ERROR; return code from pthread_create() is %d\n", ret);
            return -1;
        }
        printf("af on\n");
    }
    else if (strcmp(commandLine, "af 0") == 0)
    {
        run_afc_thread = 0;
        while (abort_afc_thread)
        {
            usleep(500 * 1000);
        }
        printf("af off\n");
    }
    else if (strstr(commandLine, "focus") != 0)
    {
        sscanf(commandLine, "%s %d", command, &afPosition);

        printf("Focus Position:%d\n", afPosition);
        if (afPosition > 0x03ff || afPosition < 0)
        {
            printf("write: invalid data\n");
        }
        else
        {
            usleep(FOCUS_WAIT * 1000);
            DirectMode();
            usleep(FOCUS_WAIT * 1000);
            DirectMove(afPosition);
            
        }
    }
    else if (strstr(commandLine, "ois") != 0)
    {
        sscanf(commandLine, "%s %d", command, &mode);

        OIS_Mode(mode);
    }
    else
    {
        printf("bad command!\n");
        return -1;
    }

    return 1;
}

/*******************************************************************************
 * @brief   Read setting file
 *
 * @param   void
 *
 * @return  Success 1
 ******************************************************************************/
int ReadSettingFile()
{
    FILE *fp;
    char buf[LINEBUF_MAX];
    char itemName[LINEBUF_MAX];

    if ((fp = fopen("./bin/demo.ini", "r")) != NULL) {
        while ( fgets(buf, LINEBUF_MAX, fp) != NULL ) {

            char *p = strtok(buf, "= \r\n");
            int n = 0;
            while (p)
            {
                switch (n)
                {
                    case 0:
                        strcpy(itemName, p);
                        break;
                    case 1:
                        if (strcmp(itemName, "preview") == 0)
                        {
                            strcpy(PathPreview, p);
                        }
                        else if (strcmp(itemName, "stillCapture12M_Normal") == 0)
                        {
                            strcpy(PathStill12M_NML, p);
                        }
                        else if (strcmp(itemName, "stillCapture12M_HDR") == 0)
                        {
                            strcpy(PathStill12M_HDR, p);
                        }
                        break;
                    default:
                        break;
                }
                n++;
                p = strtok(NULL, "= \r\n");
            }
        }

        fclose(fp);
    }

    return 1;
}

/*******************************************************************************
 * @brief   Still image capturing
 *
 * @param   mode    Mode0:Normal, Mode1:HDR
 *
 * @return  Success 1
 ******************************************************************************/
int StillCapture(int mode)
{
    char command[COMMAND_MAX];
    int ret;

    MessageQueueSend("quit");
    usleep(1000 * 1000);

    StillCaptureMode(mode);

    sprintf(command, "%s %d %d %d %d &", PathPreview, g_sensor_id, g_width, g_height, g_fps);
    ret = system(command);
    if (ret != 0)
    {
        printf("[Error]: %s (ret=%d)\n", command, WEXITSTATUS(ret));
    }

    return 1;
}

/*******************************************************************************
 * @brief   Still image capturing mode setting
 *
 * @param   mode    Mode0:Normal, Mode1:HDR
 *
 * @return  void
 ******************************************************************************/
void StillCaptureMode(int mode)
{
    char command[COMMAND_MAX];
    int ret;

    switch (mode)
    {
        case 0:
            sprintf(command, "%s %d", PathStill12M_NML, g_sensor_id);
            ret = system(command);
            if (ret != 0)
            {
                printf("[Error]: %s (ret=%d)\n", command, WEXITSTATUS(ret));
            }
            break;
        case 1:
            sprintf(command, "%s %d", PathStill12M_HDR, g_sensor_id);
            ret = system(command);
            if (ret != 0)
            {
                printf("[Error]: %s (ret=%d)\n", command, WEXITSTATUS(ret));
            }
            break;
        default:
            break;
    }
}

/*******************************************************************************
 * @brief   High-Speed Recording
 *
 * @param   void
 *
 * @return  Success 1
 ******************************************************************************/
int Highspeed()
{
    char command[COMMAND_MAX];
    int ret;

    MessageQueueSend("quit");
    usleep(1000 * 1000);

    sprintf(command, "gnome-terminal --command %s", PathHighspeed);
    ret = system(command);
    if (ret != 0)
    {
        printf("[Error]: %s (ret=%d)\n", command, WEXITSTATUS(ret));
    }

    return 1;
}

/*******************************************************************************
 * @brief   Send queue message
 *
 * @param   message     Input message
 *
 * @return  Success 1
 ******************************************************************************/
int MessageQueueSend(char *message)
{
    char command[COMMAND_MAX];
    int ret;

    if (strcmp(message, "quit") == 0)
    {
        sprintf(command, "pgrep -f 'gst-launch-1.0 nvcamerasrc sensor-id=%d' | xargs sudo kill -13", g_sensor_id);
        ret = system(command);
        if (ret != 13)
        {
            printf("[error]fail to kill gst-launch-1.0 (ret=%d)\n", ret);
        }
    }

    return 1;
}

/*******************************************************************************
 * @brief   AF control thread
 *
 * @param   arg     Argument
 *
 * @return  void
 ******************************************************************************/
void *AFCThread(void *arg)
{
    printf("AFControl PD:%dx%d\n", g_div_x, g_div_y);

    ReadAFSettingFile();

    DirectMode();
    DirectMove(0x200);

    while (run_afc_thread)
    {
        AFControl(g_div_x, g_div_y);
    }

    abort_afc_thread = 0;
    pthread_exit(NULL);
}
