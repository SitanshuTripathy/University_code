//sitanshu
#include <iostream>
using namespace std;
int main(){ 
int n,sum=0,a[50];
 cout<<"Enter the no of element:";cin>>n;
    cout<<"\nEnter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
 }
 for (int  i = 0; i < n; i++)
 {
    sum=sum+a[i];
 }
 cout<<"\nThe sum is="<<sum;
return 0;
}