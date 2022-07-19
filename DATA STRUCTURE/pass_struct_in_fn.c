#include<stdio.h>
struct hulk{
    char name[30];
    int age;
    int class;
    int mobile_no;
};
int display(struct hulk *h)
{
    printf("enter the name of the student\n");
    scanf("%s",& h->name);
    printf("enter the age of the student\n");
    scanf("%d",& h->age);
    printf("enter the class of the student\n");
    scanf("%d",& h->class);
    printf("enter the mobile_nopra of the student\n");
    scanf("%d",& h->mobile_no);
    printf("\n name=%s \n age=%d \n class=%d \n mobile_no=%d", h->name,h->age,h->class,h->mobile_no);
    return 0;
}
int main(){
    struct hulk h;
    display(&h);
    return 0;
}