#include<iostream>
using namespace std;
class room{
    public:
    int length;
    int width;
    int height;
    int area(){
        return length*width;
         }
          int volume(){
        return length*width*height;
    }
};
int main(){
    room r1;
    r1.length;
    r1.width;                                                                                                                             
    r1.height;
    cout <<" enter length of the room" <<endl;
    cin >> r1.length;
    cout <<" enter width of the room" <<endl;
    cin >> r1.width;
    cout <<" enter height of the room" <<endl;
    cin >> r1.height;
    
    cout << "the area of the room=" <<r1.area() <<endl;
    cout << "the volume of the room=" <<r1.volume() <<endl;
    return 0;
}
