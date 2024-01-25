#include <iostream>
using namespace std;
void reverse(string& s,int i){
   cout<<s<<" ";
    if(i>s.length())
    return;

    if(i<s.length()-1)
    swap(s[i],s[s.length()-i-1]);
    reverse(s,i+1);
}
int main(){ 
string n="abcd";
reverse(n,0);
cout<<endl;
cout<<n;
return 0;
}