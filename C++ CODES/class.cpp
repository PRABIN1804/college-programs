#include <iostream>
using namespace std;
class bahubali {
    int x, y;
    public:
    void input(){
        cout << " enter two integer" <<endl;
        cin >> x >> y;
    }
    void add(){
        cout << "sum of two number is :" << x+y;
    }
};
int main ()
{
    bahubali p;
    p.input();
    p.add();
    return 0;
}