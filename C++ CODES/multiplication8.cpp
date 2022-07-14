#include<iostream>
using namespace std;
int multiplication( int terms, int number){
    for (int i = 1; i<=terms; i++)
    {
cout << number << "*" << i<<"=" << number*i<<endl;
 }
 return 0;
}

int main()
{
    int number,terms;
    cout<< " enter a number you want multiplication table of" <<endl;
    cin >> number;
    cout<< " enter the number of terms "<<endl;
    cin >> terms ;
    multiplication(terms,number);
    return 0;
}


