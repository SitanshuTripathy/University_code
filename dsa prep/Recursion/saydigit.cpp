#include <iostream>
using namespace std;

int saydigit(int n, string st[]){
    if(n==0){
        return 0;
    }
    int d=n%10;
    n=n/10;
  saydigit(n,st);
  cout<<st[d]<<" "  ;
  return 1;
}

int main(){ 
string st[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int n;
cin>>n;
saydigit(n,st);

return 0;
}