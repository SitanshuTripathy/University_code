#include<iostream>
using namespace std;
int main(){
int n;
char m;
 cin>>n;
 cin>>m;
int i,j;
 while(i<=n){
  j=1;
  while (j<i)
 {
    cout<<m;
    j++;
       m++;
 }
 cout<<endl;
  i++;

 }
 return 0;
}    