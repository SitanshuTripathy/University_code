#include <iostream>
using namespace std;
class ABC{
public:
int a=4;
  void display(){
    cout<<a<<endl;
}
};
class BBC:virtual public ABC{
public :
int b=3;
void display(){
    cout<< b<<endl;
}
};
class KBC:virtual public ABC{
public :
int c=5;
void display(){
    cout<< c;
}
};
int main(){ 
BBC ob;
ABC *p;
//p->display();
p=&ob;
p->display();

KBC ob1;
p=&ob1;
p->display();
return 0;
}