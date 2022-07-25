#include<iostream>
#include<conio.h>
class add
{
    private:
    int a;
    int b;
    int c;
    float d;
    double e;
    public:
    add()
    {
 cout<< "enter a" <<endl;
 cin<<a;
 cout<< "enter b" <<endl;
 cin<<b;
 cout<< "add=" <<a+b<<endl;
    }
    add(int a,int b);
    add(int a,float d,double e);
};
add::add(int x,int y){
    a=x;
    b=y;
}
add::add(int p,float q,double r)
{
    a=p;
    d=q;
    e=r;
}
int main()
{
add l;
add m=add();
add n=add()
return 0;
}