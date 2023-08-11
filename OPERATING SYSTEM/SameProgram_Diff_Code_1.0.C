#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
    int pid;
    pid= fork();
    if(pid<0){
        printf("\n Error");
        exit(1);
    }
    else if(pid==0){
        printf("\n Hello I Am Child Process");
        printf("\n My pid is %d \n",getpid());
        exit(0);
    }
    else{
        printf("\n Hello I Am Child Proces");
        printf("\n My Actual pid is %d \n" getpid());
        exit(1);
    }
}