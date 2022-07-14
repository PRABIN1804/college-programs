#include<iostream>
using namespace std;
int multiply_with_arguements(int num1,int num2){
    return num1*num2;
}
int multiply_without_arguements()
{
    int num1=10,num2=20; return num1*num2;
}
int multiply_with_default_parameter(int num1,int num2,int num3 =1){
    return num1*num2*num3;
}
int main(){
    cout << "multiply_with_arguements " << multiply_with_arguements(5,10) <<endl;
    cout << "multiply_without_arguements " << multiply_without_arguements() <<endl;
    cout <<" multiple_with_default_parameter " << multiply_with_default_parameter(10,8) <<endl;
    return 0;
}