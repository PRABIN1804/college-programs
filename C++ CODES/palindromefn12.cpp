#include<iostream>
using namespace std;
void rev(int);
int main()
{
    int num;
    cout <<" enter a number" <<endl;
    cin >> num;
rev(num);
}

void rev(int num){
    int num1,d,rn=0;
    num1=num;

    while(num>0){
        d=num%10;
        rn=(rn*10)+d;
        num/=10;
    }

    if(num1==rn)
    cout<<"\n the number ["<<num1<<"] is a palindrome number \n";
    else
    cout <<"\n the number [ "<<num1<<"] is not a palindrome number \n";
   
}