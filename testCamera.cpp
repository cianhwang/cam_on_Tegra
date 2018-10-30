#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "testCamera.h"

int main(int argc, char *argv[]){
  
  char command[256] = "focus ";
  SetParam(argc, argv);
  int flag = 0;
  for (int i = 0; i < argc; ++i){
  if (strcmp(argv[i], "-set")==0){
    int a = atoi(argv[i+1]);
    if (a > 1023){a = 1023;}
    if (a < 1){a = 1;}
    char aa[256];
    sprintf(aa, "%d", a);
    strcat(command, aa);
  }
  else if (strcmp(argv[i], "-mod")==0){
    FILE *f = fopen("focus.txt", "r");
    char *curr = NULL;
    size_t sz = 0;
    getline(&curr, &sz, f);
    int a = atoi(curr);
    int b = atoi(argv[i+1]);
    int c = a+b;
    if (c > 1023){ c = 1023;}
    if (c< 0){c = 0;}

    char af[256];
    sprintf(af, "%d", c);
    strcat(command, af);
    free(curr);
    fclose(f);
  }
  else if (strcmp(argv[i], "-return")==0){
    FILE *f = fopen("focus.txt", "r");
    char *curr = NULL;
    size_t sz = 0;
    getline(&curr, &sz, f);
    printf("current focus = %s\n", curr);
    free(curr);
    fclose(f);
    return EXIT_SUCCESS;
  }
  else if (strcmp(argv[i], "-init") == 0){
    flag = 1;
  }
}

  DemoInit(flag);

  DemoControl(command);

  FILE *f = fopen("focus.txt", "w");
  const char *p = &command[6];
  fprintf(f, p);
  fclose(f);

  DemoExit();

  return EXIT_SUCCESS;
}
