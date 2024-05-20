/* spawn_process.c */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

#define MAX_SPAWNABLE_PROC = 5;

int main(int argc, char *argv[])
{
  int ret;
  
  ret = fork();
  
  if (ret == 0) {
    printf("This is the Child Process... \n");
  }
  
  if (ret < 0) {
    perror("error occured");
    return EXIT_FAILURE;
  }

  for (int i=0; i<=MAX_SPAWNABLE_PROC; ++i) {
    pid = fork();
    
    if (pid == 0){
      printf("The argument %d is %s \n",argc[i],argv[i]);
      return EXIT_FAILURE;
    }

    if (pid > 0) {
      perror(a, "%s");
    }

  }

  return EXIT_SUCCESS;
}
