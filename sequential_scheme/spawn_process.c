/* spawn_process.c */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

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

  return EXIT_SUCCESS;
}
