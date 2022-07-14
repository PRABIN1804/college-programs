#include <iostream>
using namespace std;
class item{
    static int count;
    int num1,a;
    public:
    void getdata()
    {
        num1=a;
        count++;
        
    }
void getcount(void)
    {
        cout << " count ";
        cout<<count<<endl;
       
    }
};
    int item::count;
    int main(){
        item a,b,c;
        a.getcount();
        b.getcount();
        c.getcount();
        a.getdata();
        b.getdata();
        c.getdata();
        cout <<"after reading data :" <<endl;
               a.getcount();
               b.getcount();
               c.getcount();
               return 0;
        }
