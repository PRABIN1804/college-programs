#include <iostream>
using namespace std;

int area(int l,int b){
return l*b;
}

float area(float b,float h){
return 0.5*b*h;
}

float  area(float r){
return 3.14*r*r;
}

int main()
{
cout << " the area of the rectangle is " <<area(25,15) <<endl;
cout << " the area of the triangle is " <<area(25.5,15) <<endl;
cout << " the area of the circle is " <<area(25) <<endl;
    return 0;
}