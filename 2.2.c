#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int arg,char **argv){
int pid;
switch (pid = fork()){
case 0: printf("I am the child process: pid=%d \n",getpid());
break;
default: printf("I am the parent process: pid=%d \n, child pid=%d \n",getpid(), pid);
break;
case -1: perror("fork");
}
exit(0);
}
