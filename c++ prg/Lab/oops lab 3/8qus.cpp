#include <iostream>
using namespace std;
int main(){ 
int i,n,a[20],small ;
cout<<"Enter the size of array"<<endl;
cin>>n;
cout<<"Enter the numbers in Array :";
for ( i = 0; i < n; i++)
{
    cin>>a[i];
}
small=a[0];
for  (i = 1; i < n; i++)
{
    if(a[i]<small){
        small=a[i];
    }}

cout<<"the smallest number in array is"<<small<<endl;
return 0;
} 