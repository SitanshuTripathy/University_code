#include <iostream>
using namespace std;
template <class t>
void swap(t *p,t*q){
  t *temp;
    temp= p;
    p = q;
    q = temp;
    cout<<"1st= "<<*p<<"2nd= "<<*q<<endl;
   }
int main(){ 
int a,b;
float c,d;
char m,n;
cout<<"Enter a=";cin>>a;
cout<<"Enter b=";cin>>b;
cout<<"Enter c=";cin>>c;
cout<<"Enter d=";cin>>d;
cout<<"Enter m=";cin>>m;
cout<<"Enter n=";cin>>n;
swap(&a,&b);
swap(&c,&d);
swap(&m,&n);

return 0;
}