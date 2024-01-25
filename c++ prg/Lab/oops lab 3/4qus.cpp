#include <iostream>
using namespace std;
int main(){ 
int a[5],sum=0,avg;
cout<<"Enter the marks of 5 subjects :";
for (int i = 0; i < 5; i++)
{
    cin>>a[i];
}
for (int i = 0; i <5; i++)
{
    sum=sum+a[i];
}
avg=sum/5;
cout<<"The avg mark is:"<<avg<<endl;
return 0;
}