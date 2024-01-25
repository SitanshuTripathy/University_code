#include <iostream>
using namespace std;
class xyz{
int a;
int b;
public:
void reff(int a,int b){
    this->a=a;
    this->b=b;
}
void display(){
    cout<<a<<"\n"<<b;
}
};
int main(){ 
xyz ob;
ob.reff(2,4);
ob.display();
return 0;
}