#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
char string[30];

for(int i=1; i<5; i++) {
pid_t pid = fork();

if(pid == 0) {
printf("What is child name?\n");
scanf("%[^\n]*c", string);
printf("Child name is %s\n",string);
printf("Child process => PPID=%hhd, PID=%hhd\n", getppid(), getpid());
exit(0);
}

else {
printf("Parent process => PID=%hhd\n", getpid());
printf("waiting for child process to finish....\n");
wait(NULL);
printf("Job is done!\n");
} 
}
return EXIT_SUCCESS;
}
