#include <iostream>
using namespace std;

int main() {

  int n, reversed_number = 0, remainder;

  cout << "Enter an integer: ";
  cin >> n;

  while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }

  cout << "Reversed Number = " << reversed_number;

  return 0;
}
int sum(){
int n,r,s=0;
while(n>0){
    r=n%10;
    n=n/10;
    s=s+r;
}
cout<<"the sum is:"<<endl;
cin>>s;
}
int main()
{
int n;
reverse();
sum();
return 0;
}