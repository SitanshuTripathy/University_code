#include <iostream>
using namespace std;
class op{
int x;
int y;
int z;
public:
void input(){
    cout<<"\nEnter x=";
    cin>>x;
      cout<<"\nEnter y=";
    cin>>y;
      cout<<"\nEnter z=";
    cin>>z;
}
void operator +(op ob){
int sum = ob.x+ob.y+ob.z;
cout<<"\nThe sum ="<<sum;
}
void operator -(op ob){
    int sub=ob.x-ob.y-ob.z;
    cout<<"\nThe diff ="<<sub;
}
void operator ++(){
x++;
y++;
z++; 
cout<<"\nx="<<x<<"y="<<y<<"z="<<z;
}
void operator --(){
x--;
y--;
z--;
cout<<"\nx="<<x<<"y="<<y<<"z="<<z;
}
};

int main(){ 
op ob;
ob.input();
op ob2;
 ob2 +ob;
ob2-ob;
++ob;
--ob;
return 0;
}