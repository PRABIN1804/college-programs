#include<iostream>
using namespace std;
class set{
    int a,b;
    public:
    int input(void);
    int display(void);
    int largest(void);
};
int set::largest(void){
    if(a>b)
    return a;
    else
    return b;
}
int set::input(void){
    cout << " input values of a and b:";
    cin >>a>>b;
    return 0;
}
int  set::display(void){
    cout << " largestvalue="<<largest()<<"\n";
    return 0;
}
int main()
{
    set A;
    A.input();
    A.display();
    A.largest();
    return 0;
}