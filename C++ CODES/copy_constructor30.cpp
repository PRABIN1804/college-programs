#include <iostream>
using namespace std;
class code
{
    int id;

public:
    code()
    {
        id = 0;
    }
    code(int a)
    {
        id = a;
    }
    code(code &x)
    {

        id = x.id;
    }
    void display()
    {
        cout << id << endl;
    }
};
int main()
{
    code A(100);
    A.display();
    code B(A);
    B.display();
    return 0;
}