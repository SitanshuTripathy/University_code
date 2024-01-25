#include <iostream>
#include <cmath>
using namespace std;

class coordinate
{
    int x1;
    int x2;
    int y1;
    int y2;
public :
    void input(){
    cout<<"Enter point 1 x co-ordinate: ";
    cin>>x1;
    cout<<"Enter point 1 y co-ordinate: ";
    cin>>y2;
    cout<<"Enter point 2 x co-ordinate: ";
    cin>>x2;
    cout<<"Enter point 2 y co-ordinate: ";
    cin>>y2;
}

void dist()
{
    float distn;
   distn=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    cout<<"The distance between the two coordinates are : "<<distn;
}
};
int main() {
    coordinate c;
    c.input();
    c.dist();
}