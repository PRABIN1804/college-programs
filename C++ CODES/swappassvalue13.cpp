#include<iostream>
using namespace std;
int swap(int ,int);
int main()
{
    int a,b;
    cout <<" enter the two number ";
    cin>>a>>b;
    cout <<" after swapping of two numbers";
    swap(a,b);
    return 0;
}
int swap(int x,int y)
{
    int z;
    z=x;
    x=y;
y=z;
cout <<" "<<x<<" "<<y;
return 0;

}