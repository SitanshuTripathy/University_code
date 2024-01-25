//sitanshu
#include <iostream>
using namespace std;
int main(){ 
int a[50],n;
cout<<"Enter the range :";cin>>n;
for (int i = 0; i <= n; i++)
{
    a[i]=i;
}
cout<<"\nThe number which are divisible by 13 and 7 are :";
for (int i = 0; i <n; i++)
{  if ((a[i]%7==0) && (a[i]%13==0))
    {
       cout<<"\t"<<a[i];
    }
}
return 0;
}