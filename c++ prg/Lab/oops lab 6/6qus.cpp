#include <iostream>
using namespace std;
void inc(int *p){
    *p=*p+1;
    cout<<"The increment a :"<<*p;
}
void incpost(int *p){
    (*p)++;
    cout<<"\nThe increment b :"<<*p;
}
void incpre(int *p){
     ++(*p);
    cout<<"\nThe increment c :"<<*p;
}
int main(){ 
int a,b,c;
cout<<"Enter a =";
cin>>a;
cout<<"Enter b =";
cin>>b;
cout<<"Enter c =";
cin>>c;
inc(&a);
incpost(&b);
incpre(&c);
return 0;
}