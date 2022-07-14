#include<iostream>
using namespace std;
class student{
  public:
  string name;
  int roll_no;
};
int main()
{
    student myobj;
    cout  << " enter student's name" <<endl;
    cin >> myobj.name;
    cout <<" enter student's roll no" <<endl;
    cin >> myobj.roll_no;
    cout << "\n" <<endl;
    cout <<" student's data" <<endl;
    cout << " name " << myobj.name <<endl;
    cout << " roll_no:" <<myobj.roll_no <<endl;
    return 0;
}