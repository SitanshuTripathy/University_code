#include <iostream>
using namespace std;
class ABC{ 
public:
int a=4;
virtual void display()=0;
};
class BBC:virtual public ABC{
public :
int b=3;
void display(){
    cout<<b<<endl<<a<<endl;
}
};
class KBC:virtual public ABC{
public :
int c=5;
void display(){
    cout<<c<<endl<<a;
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