#include <iostream>
using namespace std;
class ABC{
public:
int a=4;
virtual void display(){
    cout<<a;
}
};
class BBC:virtual public ABC{
public :
int b=3;
void display(){
    cout<<b;
}
};
class KBC:virtual public ABC{
public :
int c=5;
void display(){
    cout<<c;
}
};
int main(){ 
BBC ob;
ABC *p;

p=&ob;
p->display();

KBC ob1;
p=&ob1;
p->display();
return 0;
}