#include <iostream>
using namespace std;
class cenmetr;
class mtr{
int m;
public:
void getvalue(){
    cout<<"Enter the value of mtr =";
    cin>>m;
}
friend void sum(mtr &,cenmetr &);
};
class cenmetr{
int cm;
public:
void getvalue(){
    cout<<"Enter the value of centimtr =";
    cin>>cm;}
   friend void sum(mtr&,cenmetr&); 
};
void sum(mtr &a,cenmetr &b){
  int add;
  add = (a.m*100)+b.cm;
  cout<<"The sum is "<<add<<"cm";
}
int main(){ 
mtr ob;
cenmetr ob2;
ob.getvalue();
ob2.getvalue();
sum(ob,ob2);
return 0;
}