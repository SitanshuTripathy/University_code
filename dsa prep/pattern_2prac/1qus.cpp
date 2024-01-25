#include <iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    int bitwiseComplement(int n) {
       int ans=0;
       int i=0;
       while(n!=0){
       int bit=n&1;
       ans=bit+pow(10,i)+ans;
       n=n>>1;
       i++;
       } 
  ans=~ans;

  int  a=0,j=0;
  while(ans!=0){

      int dig=ans%10;
if(dig==1){
    a=a+pow(2,i);
}
ans=ans/10;
j++;
  }

 }
};