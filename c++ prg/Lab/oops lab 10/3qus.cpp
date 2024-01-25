#include <iostream>
using namespace std;
class xyz{
    int a;
    public:
void input(){
cout<<"\nEnter a=";cin>>a;

}
void operator!(){
  if (a==0)
  a=1;
  else
  a=0;
  cout<<"\nThe Value = "<<a;
}
};
int main(){ 
xyz ob;
ob.input();
!ob;
return 0;
}