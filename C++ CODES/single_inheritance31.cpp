#include<iostream>
using namespace std;
class worker
{
    public:
    int age;
    char name[10];
    void get();
};
void worker::get()
{
    cout<<"your name please"<<endl;
    cin>>name;
    cout<<"your age please"<<endl;
    cin>>age;
}
void worker::show()
{
    cout<<"in my name is:"<<name"in my age is:"<<age;
}
class manager:pubilc worker
{
    
    int now;
    public:
    void get();
    void show();
};
void manager::get()
{
    worker::get();
    cout <<"no of workers under you"<<endl;
    cin>>no;
    cin>>name>>age;
}
void manager::show()
{
    worker::show();
    cout <<"no of workers under me"<<endl;
    cin>>no;
}
int main()
{
    worker W1;
    manager M1;
    M1.get();
    M1.show();
    return 0;
}