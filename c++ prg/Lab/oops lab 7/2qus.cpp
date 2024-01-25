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
complex(complex* a){
cout<<"The compex number ="<<a->real<<"+"<<a->img<<"i";
}

};
int main(){
complex ob1(3,4);
complex ob2(&ob1);
return 0;
}


