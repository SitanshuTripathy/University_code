#include <iostream>
using namespace std;
template<class T>
T minimum(T a[],int size)
{
T min=a[0];
for(int i=0;i<size;i++){ 
if(a[i]<min)
min=a[i];}
return min;
}
int main(){ 
int n;
cout<<"enter the size ="; cin>>n;
int a[n];float b[n];
cout<<"Enter int num =";
for (int i = 0; i < n; i++)
{
    cin>>a[i];}

cout<<"Enter float num =";
for (int i = 0; i < n; i++)
{
    cin>>b[i];}
cout<<"INT = "<<minimum(a,n);
cout<<"\nFL= "<<minimum(b,n);
return 0;
}