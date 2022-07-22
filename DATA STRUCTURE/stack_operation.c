#include<stdio.h>
#include<conio.h>
static int stack[10],top=-1;
void main()
{
    void push(int);
    void pop(void);
    void show(void);
    printf("\n push operation");
    push(5);
    push(8);
    push(7);
    show();
    printf("\n Pop operation");
    pop();
    show();
    pop();
    show();
}
void push(int j)
{
    top++;
    stack[top]=j;
}
void pop(){
    stack[top]=0;
    top--;
}
void show(){
    int j;
    printf("\n stack elements are:");
    for(j=0; j<10; j++){
        stack[j]!=0? printf("\n%d",stack[j]):printf("");
    }
}  