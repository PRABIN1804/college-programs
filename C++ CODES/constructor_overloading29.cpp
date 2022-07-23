#include<iostream>
#include<conio.h>
using namespace std;
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
 cin>>a;
 cout<< "enter b" <<endl;
 cin>>b;
 cout << " enter c" <<endl;
 cin>>c;
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
add m=add(5,6);
add n=add(7,8.5,9.55);
return 0;
}