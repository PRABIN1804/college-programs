#include<iostream>
using namespace std;
int main()
{
int divisor,dividend,quotient,remainder;
cout<< "enter the divisor";
cin>> divisor;
cout<< "enter the dividend";
cin >> dividend;
quotient= dividend / divisor;
remainder= dividend%divisor;
cout << " quotient =" << quotient << endl;
cout << " remainder =" << remainder;
return 0;
}