#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    int a[5];
    printf("\n enter the element of the array");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("\n array element are:\n");
    {
    for(i=0;i<5;i++)
    {
    printf("\n a[%d]=%d",i,a[i]);
    }
    }
}