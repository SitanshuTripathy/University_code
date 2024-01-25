#include <iostream>
using namespace std;
class complex{
int real;
int img;
public:
void input(){
    cout<<"\nEnter the real number =";cin>>real;
    cout<<"\nEnter the img =";cin>>img;
    }
void operator +(complex ob1){
cout<<"\nreal sum="<<real+ob1.real;
cout<<"\nimg sum="<<img+ob1.img;
}
void operator -(complex ob1){
cout<<"\nreal diff="<<real-ob1.real;
cout<<"\nimg diff="<<img+ob1.img;
}
void operator *(complex ob1){
cout<<"\nreal prd="<<real*ob1.real;
cout<<"\nimg prd="<<img*ob1.img;
}

void operator /(complex ob1){
cout<<"\nreal division="<<real/ob1.real;
cout<<"\nimg div="<<img/ob1.img;
}};
int main(){ 
complex ob;
complex ob1;
ob.input();
ob1.input();
ob+ob1;
ob-ob1;
ob*ob1;
ob/ob1;
return 0;
}