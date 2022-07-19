#include<stdio.h>
int main(){{
int a,b,swap;
a=5;
b=10;
swap(&a,&b);
}
swap(int*x,int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
printf("x=%d,y=%d",*x,*y);
return 0;
}