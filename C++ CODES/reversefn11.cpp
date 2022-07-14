#include<iostream>
using namespace std;
int reverse(int num);
int main()
{
int num=0,result=0;
cout <<" enter a number" <<endl;
cin >>num;

result=reverse(num);
cout << " reverse number is " <<result <<endl;
}

int reverse (int num)
{
    int temp=0,rev=0;
    while(num!=0){
        temp=num%10;
        rev=(rev*10)+temp;
        num=num/10;
    }
    return rev;
}