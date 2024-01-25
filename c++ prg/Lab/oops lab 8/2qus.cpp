#include <iostream>
using namespace std;
class circle{
    public:
    int rad=3;
    int ar;
    circle(){
    ar=3.14*rad*rad;    
     cout<<"\nThe area of the circle = "<<ar;
     }
};
class rectangle:public circle{
public :
int brd=4;
rectangle(){
   int  sqar=rad*brd;
   cout<<"\nThe area of the rectangle is ="<<sqar;
}
};
class box:public rectangle{
public :
int hgt=7;
box(){
    int vol=rad*hgt*brd;
    cout<<"\nThe volume of the box is ="<<vol;
}
};
int main(){ 
box ob;
return 0;
}