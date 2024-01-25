#include <iostream>
using namespace std;
void reverse(string& s,int i,int j){
   
    if(i>j)
    return;
    
    swap(s[i],s[j]);
    i++;
    j--;
 
    reverse(s,i,j);
}
int main(){ 
string n="abcd";
reverse(n,0,n.length()-1);
cout<<endl;
cout<<n;
return 0;
}