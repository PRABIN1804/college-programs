#include<iostream>
using namespace std;
class items{
    int n1;
    int n2;
    public:
    void getdata();
    void dispdata();
};
void items::getdata(){
    cout << " enter zoology mark:";
    cin >> n1;
    cout << "enter botany mark:";
    cin >> n2;
}
void items::dispdata(){
    cout << " zoology mark" <<n1<<endl;
    cout << " botany mark" <<n2<<endl;
}
int main()
{
    items X;
    X.getdata();
    X.dispdata();
    return 0;
}
