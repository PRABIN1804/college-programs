#include<iostream>
using namespace std;
class A
{
protected:
int x;
public:
void get (int) ;
void show (void) ;
};
void A :: get (int a)
{ x = a ; }
void A :: show (void)
{ cout << x ;}
class A : virtual public A
{
protected:
int y ;
public:

void get (int) ;
void show (void);
};
void A :: get (int a)
{ y = a;}
void A1 :: show (void)
{
cout <<y ;
}
class A2 : virtual public A
{
protected:
int z ;
public:
void get (int a)
{ z =a;}
void show (void)
{ cout << z;}
};
class A12 : public A1, public A2
{
int r, t,x,y,z;
public:
void get(int a)
{ r = a;}
void show (void)
{ t = x + y + z + r ;
cout<<“result =” << t ;
}
};
int main ( )
{
A12 r;
r.A : : get (3) ;
r.A1 : : get (4) ;
r.A2 : : get (5) ;
r.get (6);
r.show();
return 0;
}
