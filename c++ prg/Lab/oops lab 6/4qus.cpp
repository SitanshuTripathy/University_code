#include <iostream>
using namespace std;
class xyz{
private:
 int a;
public:
inline void square(){
  cout<<"\nEnter the value :";
  cin>>a;
  int sq=a*a;
  cout<<"\nThe square "<<sq;
} 
inline void cube(){
   int cu=a*a*a;
  cout<<"\nThe cube "<<cu;
} 
};

int main(){ 
xyz ob;
ob.square();
ob.cube();
return 0;
}