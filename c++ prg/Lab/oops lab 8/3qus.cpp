#include <iostream>
using namespace std;
class circle{
    public:
    int rad=3;
    int ar;
    void area(){
    ar=3.14*rad*rad;    
     cout<<"\nThe area of the circle = "<<ar;
     }
};
class rectangle:public circle{
public :
int brd=4;
void area(){
   int  sqar=rad*brd;
   cout<<"\nThe area of the rectangle is ="<<sqar;
}
};

class cylinder :public circle{
    public:
int hc=8;
void volume(){
    int vl=3.14*rad*rad*hc;
      cout<<"\nThe volume of the cylinder is ="<<vl;
}
};

int main(){
rectangle ob;
ob.area();
ob.circle::area();

cylinder ob1;
ob1.volume();
ob1.circle::area();
return 0;
}