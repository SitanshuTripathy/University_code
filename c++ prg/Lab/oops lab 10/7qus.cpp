#include <iostream>
using namespace std;
class xyz{
    public :
int a[5];
int i;
void input(){
cout<<"\nEnter 5 values = ";
for ( i = 0; i < 5; i++)
{
    cin>>a[i];
}}
void operator[](int i){
    cout<<a[i];
}
};
int main(){ 
xyz ob;
ob.input();
ob[2];
return 0;
}