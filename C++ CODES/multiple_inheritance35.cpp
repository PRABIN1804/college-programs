#include<iostream>
using namespace std;
class father
{
    int age;
    char name[20];
    public:
    void get();
    void show();
};
void father::get()
{
    cout<<"enter the name of your father:"<<endl;
    cin>>name;
    cout<<"enter the age of your father:"<<endl;
    cin>>age;
}
void father::show()
{
    cout <<"my father's name is"<<name<<"  my father's age is:"<<age<<endl;
}
class mother
{
    char name[20];
    int age;
    public:
    void get()
    {
        cout <<"enter the name of your mother"<<endl;
        cin>>name;
        cout<<"enter the age of your mother"<<endl;
        cin>>age;
    }
    void show()
    {
        cout <<"my mother name is"<<name<<" and the age of my mother is"<<age<<endl;
    }
};
class son : public father,public mother
{
char name[20];
int std;public:
void get();
void show();
};

void son :: get()
{
    father::get();
    mother::get();
    cout<<"enter your name :"<<endl;
    cin>>name;
    cout<<"enter your standard :"<<endl;
    cin>>std;
}
void son::show()
{
    father::show();
    mother::show();
    cout<<"my name is:"<<name<<endl;
    cout<<"my standard is:"<<std<<endl;
}
int main()
{
    son s1;
    s1.get();
    s1.show();
    return 0;
}