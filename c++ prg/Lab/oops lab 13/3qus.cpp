#include <iostream>
using namespace std;
template<class t>
void search(t a[],int n,t key){
for (int  i = 0; i < n; i++)
{
    if (key==a[i])
    {
       cout<<"\nThe key ="<<key<<" at position ="<<i+1;
    }
    
}

}
int main(){ 
    int n;
cout<<"enter the size ="; cin>>n;
int a[n];double b[n];char c[n];
cout<<"Enter int num =";
for (int i = 0; i < n; i++)
{
    cin>>a[i];}

cout<<"Enter float num =";
for (int i = 0; i < n; i++)
{
    cin>>b[i];}
cout<<"Enter char num =";
for (int i = 0; i < n; i++)
{
    cin>>c[i];}


search(a,n,3);
search(b,n,1.1);
search(c,n,'b');
return 0;
}