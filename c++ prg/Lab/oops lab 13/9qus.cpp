#include <iostream>
using namespace std;
template <class t>
class A{
t a;
t b;
public:
A(t a,t b){
    this->a=a;
    this->b=b;
}
t getmax(){
    if(a>b)
    return a;
    else
    return b;
}
};
int main(){ 
A <int>ob(1,2);
cout<<"\nThe max = "<<ob.getmax();
A <double>ob2(1.3,1.2);
cout<<"\nThe max = "<<ob2.getmax();
return 0;
}