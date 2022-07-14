#include <iostream>
using namespace std;
class employee{
    private:
    char name[30],add[30],dept[30]; 
    int sal;
    public:
    int getdata();
    int putdata();
};
int employee::getdata()
{
    cout <<"enter the name:"<<endl;
    cin >> name;
    cout << " enter the address" <<endl;
    cin >> add;
    cout << " enter the salary" <<endl;
    cin >> sal;
    cout << "enter the department" <<endl;
    cin >> dept;
    return 0;
}
int employee::putdata()
{
cout <<name <<endl;
cout <<add <<endl;
cout <<sal <<endl;
cout <<dept <<endl;
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