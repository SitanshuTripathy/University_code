#include <iostream>
using namespace std;
class dist{
int feet;
int inch;
public:
void input(){
    cout<<"\nEnter the feet= ";cin>>feet;
    cout<<"\nEnter inch= ";cin>>inch;
}
void operator >(dist ob2){
if(feet>ob2.feet)
cout<<"\nThe distance 1 is greater";
else 
cout<<"\nThe distance 2 is greater";
}
void operator <(dist ob2){
if(feet<ob2.feet)
cout<<"\nThe distance 2 is greater";
else 
cout<<"\nThe distance 1 is greater";
}
void operator !=(dist ob2){
if(feet!=ob2.feet)
cout<<"\nThe distance 2 not =distance 1";
else 
cout<<"\nboth equal";
}};
int main(){ 
dist ob;
ob.input();
dist ob2;
ob2.input();
ob>ob2;
ob<ob2;
ob!=ob2;
return 0;
}