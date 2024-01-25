//WAP to create an array that can store max. 50 integers and display the contents of the array
//Sitanshu
#include <iostream>
using namespace std;
int main(){ 
    int n,a[50];
    cout<<"Enter the no of element:";cin>>n;
    cout<<"\nEnter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
 }
cout<<"\nThe elements : ";
for (int i = 0; i < n; i++)
{
    cout<<"\t"<<a[i];
}
    
return 0;
}