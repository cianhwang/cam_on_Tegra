#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <mqueue.h>
#include <linux/limits.h>
#include "demo_control.c"

int main(int argc, char **argv){
  DemoInit();

  int afPosition = 512;
  if (strcmp(argv[1],"0")){
    afPosition = atoi(argv[2]);
  }
  else if (strcmp(argv[1], "1")){
    ;
  }
  else{
    ;
  }
  usleep(FOCUS_WAIT * 1000);
  DirectMode();
  usleep(FOCUS_WAIT * 1000);
  DirectMove(afPosition);
  return EXIT_SUCCESS;
}
