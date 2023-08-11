#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    pid_t pid,p;
    p= fork();
    pid=getpid();
    
    if(p<0){
        printf(stderr,"fork failed");
         exit(1);
    }
    printf("Output of fork id: %d \n",p);
    printf("Process id is: %d \n",pid);
    return 0;
}