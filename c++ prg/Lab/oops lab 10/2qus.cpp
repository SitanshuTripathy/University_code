#include <iostream>
using namespace std;
class point{
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
void operator-(){
    x= -x;y= -y;z=-z;
    cout<<"\nx="<<x<<"y="<<y<<"z="<<z;
    
}

};

int main(){ 
point ob;
ob.input();
++ob;
--ob;
-ob;
return 0;
}