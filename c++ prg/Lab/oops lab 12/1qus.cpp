#include <iostream>
using namespace std;
int main(){ 
float a,b;
cout<<"\nEnter a= ";
cin>>a;
cout<<"\nEnter b= ";
cin>>b;
try
{
    if(b!=0)
    cout<<"Division = "<<a/b;
   else
   throw 10;

}
catch(...)
{
   cout<<"division is not possible";
}

return 0;
}