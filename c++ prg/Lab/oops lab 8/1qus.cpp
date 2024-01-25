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
   cout<<"The area of the rectangle is ="<<sqar;
}
};
int main(){ 
    rectangle ob;
    ob.circle::area();
    ob.area();
return 0;
}