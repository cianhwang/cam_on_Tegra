#ifndef TESTCAMERA_H
#define TESTCAMERA_H
//#include "demo_control.h"
//#include "af_control.h"
//#include "communication.h"
enum E_FOCUS_MODE
{
    FOCUS_MODE_DIRECT = 0,
    FOCUS_MODE_INFINITY,
    FOCUS_MODE_MACRO
};

extern "C"
{
void SetParam(int argc, char *argv[]);
int GetSensID();
int DemoInit(int flag);
int DemoExit();
int DemoControl(char *commandLine);
}

#endif // TESTCAMERA_H
