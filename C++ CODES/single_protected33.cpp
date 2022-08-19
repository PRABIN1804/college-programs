#include<iostream>
using namespace std;
class worker
{
    protected:
    int age;
    char name[20];
    void get();
    void show();
};
void worker::get()
{
    cout << " enter the name of the worker:"<<endl;
    cin>>name;
    cout << " enter the age of the worker:"<<endl;
    cin>>age;
}
void worker::show()
{
    cout <<"the name of the worker is "<<name<< "and the is "<<age<<endl;
}
class manager : protected worker
{
int num;
public:
void get();
void show();
};
void manager::get()
{
    worker::get();
    cout<<" enter the number of the worker:"<<endl;
    cin>>num;
}
void manager::show()
{
    worker::show();
    cout<< " the number of worker under me is:"<<num<<endl;
}
int main()
{
    manager m1;
    m1.get();
    m1.show();
    return 0;
}