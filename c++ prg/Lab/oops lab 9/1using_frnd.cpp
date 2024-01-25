#include <iostream>
using namespace std;\

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
friend void operator +(op& );
friend void operator -(op&);

};
void operator +(op& ob){
int sum = ob.x+ob.y+ob.z;
cout<<"\nThe sum ="<<sum;
}
void operator -(op &ob){
    int sub=ob.x-ob.y-ob.z;
    cout<<"\nThe diff ="<<sub;
}

int main(){ 
op ob;
ob.input();
op ob2;
+ob;
-ob;
return 0;
}