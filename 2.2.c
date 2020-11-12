#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main(int arg,char **argv){
int pid;
switch (pid = fork()){
case 0: printf("I am the child process: pid=%d \n",getpid());
break;
default: printf("I am the parent process: pid=%d \n, child pid=%d \n",getpid(), pid);
wait(NULL);
break;
case -1: perror("fork");
exit(1);
}
exit(0);
}
