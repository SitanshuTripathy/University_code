#include <iostream>
#include<string>
using namespace std;
class stng{
string chr;
public:
void input(){
    cout<<"Enter the string";cin>>chr;
}
void operator==(stng ob2){
if(chr.size()==ob2.chr.size())
cout<<"\nThe two string are equal";
else 
cout<<"\nNot equal";
}
};
int main(){ 
stng ob;
ob.input();
stng ob2;
ob2.input();
ob==ob2;
return 0;
}