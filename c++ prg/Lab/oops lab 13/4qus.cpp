#include <iostream>
using namespace std;
template<class v>
v sort(v a[],int size)
{
    v temp; int min ,i,j;
   for (i = 0; i <size ; i++) {
      min = i;
      for (j = i + 1; j < size; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
   cout<<endl;
   
   for ( i = 0; i <size; i++)
   {
    cout<<"\t"<<a[i];
   }
   return 0;
}
int main(){ 
int n;
cout<<"enter the size ="; cin>>n;
int a[n];double b[n];
cout<<"Enter int num =";
for (int i = 0; i < n; i++)
{
    cin>>a[i];}
cout<<"Enter float num =";
for (int i = 0; i < n; i++)
{
    cin>>b[i];}


sort(a,n);
sort(b,n);
return 0;
}