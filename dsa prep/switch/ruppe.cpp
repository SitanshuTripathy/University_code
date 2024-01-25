#include <iostream>
using namespace std;
int main(){ 
int num;
cin>>num;
 int m;
 
cin>>m;
 switch (m)
 {
 case 1:
    num=num/100;
    cout<<"100 = "<<num<<endl;
    num=num%100;
    
  case 2:
    if (num>=50)
    {
      num=num/50;cout<<"50 = "<<num<<endl;
      num=num%50;

    }
    
    
     case 3:
    if (num>=20)
    {
      num=num/20;
      cout<<"20 = "<<num<<endl;
       num=num%20;
    }
    
    
         case 4:
    if (num>=10)
    {
      num=num/10;cout<<"10 = "<<num<<endl;

    }

 default:
 if (num==0)
 {
    cout<<"no of notes = 0";
 }
 
    break;
 }
return 0;
}