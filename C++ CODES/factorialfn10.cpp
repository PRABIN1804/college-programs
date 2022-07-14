#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int num,factorial;
    cout << " enter the number \n";
    cin >> num;

    factorial=fact (num);
    cout << "factorial of " <<num<< "is" <<factorial;
    return 0; 
}
 
 int fact(int num){
     int i,f=1;
     for (i=1;i<=num; i++)
     f=f*i;
     return (f);
 }