#include <stdio.h>
#include <conio.h>
void main()
{

    int a[5];
    int i = 0;
    int j=0;
    printf("\n enter the element of the array \n");
    do
    {
         printf("enter the element %d=", i);
         scanf("%d", &a[i]);

    } while (i < 5);
    
    printf("\n array element are:\n");
    {
        do
        { printf("\n a[%d]=%d", j, a[j]);
            j++;
        } while (j < 5);

    }
}