#include<iostream>
using namespace std;
class room{
    public:
    int length;
    int  width;
    int height;
    int calculatearea(){
        return length*width;
    }
    int calculatevolume(){
        return length*width*height;
    }
};
 int main(){
    room r1;
    r1.length=35;
    r1.width=30;
    r1.height=25;
    cout << " area of the room=" << r1.calculatearea() <<endl;
    cout << " volume of the room=" << r1.calculatevolume() <<endl;
    return 0; 
 }
