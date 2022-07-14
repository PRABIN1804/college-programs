#include <iostream>
using namespace std;

int squ( int a)
{
    return a*a;
}

int cube(int b){
    return b*b*b;
}
int main()
{
    int num;
    cout << "enter a number" <<endl;
    cin >>num;
     
     cout << " square of your given num:" <<squ(num) <<endl;
     cout << " cube of your  given num:" <<cube(num) <<endl;
     return 0;
}