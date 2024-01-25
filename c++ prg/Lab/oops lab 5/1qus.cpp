#include <iostream>
using namespace std;
class cls2;
class cls1
{  
 int a;
 public: 
 void indata() 
 { cout<<"enter a:";
 cin>>a;
} 
 
 friend void swap(cls1 &, cls2 &);
};
class cls2
{ 
 int b;
 public: 
 void indata() 
 { cout<<"enter b:";
 cin>>b;
    } 

 friend void swap(cls1 &, cls2 &);
};
void swap(cls1 &x, cls2 &y)
{ 
 int temp = x.a; 
 x.a = y.b; 
 y.b = temp;
 cout<<"after swap a="<<x.a<<"b="<<y.b;
}
int main(){ 
cls1 C1; 
 cls2 C2;
 C1.indata(); 
 C2.indata();  
 swap(C1,C2); 

return 0;
}