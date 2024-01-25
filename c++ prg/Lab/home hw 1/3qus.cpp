//sitanshu
#include <iostream>
using namespace std;
int main(){ 

int n,a[50],large;
 cout<<"Enter the no of element:";cin>>n;
    cout<<"\nEnter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
 }
large=a[0];
for (int i = 0; i <n; i++)
 {
   
    if(a[i]>large){
      large=a[i];
    }
 }
 cout<<"\nThe largest no is="<<large;
return 0;
}