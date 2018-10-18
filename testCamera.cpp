#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "testCamera.h"

int main(int argc, char *argv[]){
  
  char command[256] = "focus ";
  //char *argv2[] = {"./testCamera", "-id", "0", "-w", "3840", "-h", "2160", "-fps", "30"};
  //SetParam(9, argv2);
  if (strcmp(argv[1], "0")==0){
    strcat(command, argv[2]);    
  }
  else if (strcmp(argv[1], "1")==0){
    FILE *f = fopen("focus.txt", "r");
    char *curr = NULL;
    size_t sz = 0;
    getline(&curr, &sz, f);
    int a = atoi(curr);
    int b = atoi(argv[2]);
    int c = a+b;
    if (c > 1023){ c = 1023;}
    if (c< 0){c = 0;}

    char af[256];
    sprintf(af, "%d", c);
    strcat(command, af);
    free(curr);
    fclose(f);
  }
  else if (strcmp(argv[1], "2")==0){
    FILE *f = fopen("focus.txt", "r");
    char *curr = NULL;
    size_t sz = 0;
    getline(&curr, &sz, f);
    printf("current focus = %s\n", curr);
    free(curr);
    fclose(f);
    return EXIT_SUCCESS;
  }

  DemoInit();

  DemoControl(command);

FILE *f = fopen("focus.txt", "w");
  const char *p = &command[6];
  fprintf(f, p);
  fclose(f);

  DemoExit();

  return EXIT_SUCCESS;
}
