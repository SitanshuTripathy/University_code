#include<iostream>
using namespace std;

bool pal(string s,int i,int j){
if(i>j)
return true;

if(s[i]!=s[j])
return false;

else
return pal(s,i+1,j-1);
}

int main(){

    string str="aabbaa";
   
bool ispal=pal(str,0,str.length()-1);

if(ispal){
    cout<<"it is aplindrome";
}
else
cout<<"It is not palindrome";
    return 0;
}