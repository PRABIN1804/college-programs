#include <iostream>
using namespace std;
class employee{
    private:
    char name[30]; 
    int age,sal;
    public:
    int getdata();
    int putdata();
};
int employee::getdata()
{
    cout <<"enter the name:"<<endl;
    cin >> name;
    cout << " enter the age" <<endl;
    cin >> age;
    cout << " enter the salary" <<endl;
    cin >> sal;
    return 0;
}
int employee::putdata()
{
    cout <<name <<endl;
    cout <<age <<endl;
    cout <<sal <<endl;
    return 0;
}
int main()
{
    employee e[10];
    for(int i=0;i<10;i++)
    {
        e[i].getdata();
    }
    cout <<endl;
    for(int i=0;i<10;i++)
    {
        e[i].putdata();
    }
    return 0;
}