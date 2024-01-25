#include <iostream>
using namespace std;
int main(){ 
int i,n,a[20],large ;
cout<<"Enter the size of array";
cin>>n;
cout<<"Enter the numbers in Array :";
for ( i = 0; i < n; i++)
{
    cin>>a[i];
}
large=a[0];
for  (i = 1; i < n; i++)
{
    if(a[i]>large){
        large=a[i];
    }}

cout<<"the largest number in array is"<<large<<endl;
return 0;
}
