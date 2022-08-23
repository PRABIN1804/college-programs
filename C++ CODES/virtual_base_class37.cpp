#include<iostream>
using namespace std;
class student
{
    protected:
    int r_no;
public:
void get_n(int a)
{
r_no=a;
}
void put_n(void)
{
    cout <<"roll no. :"<<r_no<<endl;
}
};
class test: virtual public student
{
    protected:int part1,part2;
    public:
    void get_m(int x,int y)
    {
        part1=x;part2=y;
    }
    void put_m(void)
    {
        cout <<"marks obtained:\n"<<"part1="<<part1<<endl<<"part2="<<part2<<endl;  
    }
};
class sports:public virtual student
{
    protected:
    int score;
    public:
    void get_s(int s)
    {
        score=s;
    }
    void put_s(void)
    {
        cout<<"sports wt.:"<<score<<endl;
    }
};
class result:public test,public sports
{
    int total;
    public:
    void display(void);
};
void result::display(void)
{
    total=part1+part2+score;
    put_n();
    put_m();
    put_n();
    cout <<"Total score:"<<total<<endl;
}
int main()
{
    result s1;
    s1.get_n(347);
    s1.get_m(30,35);
    s1.get_s(7);
    s1.display();
}