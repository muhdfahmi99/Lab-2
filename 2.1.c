/*  #include <stdio.h> */ 
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
fork();
printf("Hello Class\n");
wait(NULL);
return 0;
}
