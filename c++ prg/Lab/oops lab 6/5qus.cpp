#include <iostream>
using namespace std;
void swap(int *p,int *q){
    int *temp;
    temp= p;
    p = q;
    q = temp;
    cout<<"\nThe value of a="<<*p<<" b="<<*q;
}
int main(){ 
int a,b;
cout<<"Enter a=";cin>>a;
cout<<"Enter b=";cin>>b;
swap(&a,&b);
return 0;
}