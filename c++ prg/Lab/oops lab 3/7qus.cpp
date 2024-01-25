#include <iostream>
using namespace std;
int main(){ 
int a[10],s=0;
for (int i = 0; i < 5; i++)
{
    cin>>a[i];
}
for (int i = 0; i <5; i++)
{
    s=s+a[i];
}
cout<<"The sum of array is:"<<s;
return 0;
}