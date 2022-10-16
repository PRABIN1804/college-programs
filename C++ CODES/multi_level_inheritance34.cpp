#include<iostream>
using namespace std;
class worker
{
    public:
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
    cout <<"the name of the worker is :"<<name<< " and the is "<<age<<endl;
}
class manager : public worker
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
void manager::show(){
    worker::show();
    cout<< " the number of worker under me is:"<<num<<endl;
}
class ceo: public manager
{
    int num2;

    public:
    void get();
    void show();
};
void ceo::get()
{
    manager::get();
    cout <<"the number of manger under you:"<<endl;
    cin>>num2;
}
void ceo::show()
{
    manager::show();
    cout <<"the number of worker under me is:"<<num2;
}
int main()
{
    ceo c1;
    c1.get();
    c1.show();
    return 0;
}