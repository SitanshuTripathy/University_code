#include <iostream>
using namespace std;
class xyz{
public :
int a=3;
void operator()(int m,int n){
    a=a+m+n;
    cout<<"\nThe value of a ="<<a;
}
};
int main(){ 
xyz ob;
ob(1,2);
return 0;
}