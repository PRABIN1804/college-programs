#include<iostream>
using namespace std;
int add(int a,int b)
{
    cout <<"sum="<<(a+b);
    return 0;
}
int add (double a,double b)
{
    cout <<endl << "sum=" <<(a+b);
     return 0;
}
int main()
{
    add(10,2);
    add(5.3,6.2);
    return 0;
}