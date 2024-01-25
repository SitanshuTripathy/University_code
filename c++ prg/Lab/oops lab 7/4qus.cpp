#include <iostream>
using namespace std;
class complex{
int real;
int img;
public:

complex(int real,int img){
  this->real=real;
  this->img=img;
}
complex(complex *ob){
cout<<"The complex number ="<<ob->real<<"+"<<ob->img<<"i";
}
~complex(){
    cout<<"\nThe destructor has been invoked";
}
};
int main(){
complex ob1(3,4);
complex ob2(&ob1);
return 0;
}