//sitanshu
#include <iostream>
using namespace std;
int main(){ 
char s[50];
cout<<"Enter the string :";
cin>>s;

for (int i = 0; s[i]!='\0'; i++)
{
if (s[i]=='a')
s[i]='b';
if (s[i]=='e')
s[i]='f';
if (s[i]=='i')
s[i]='j';
if (s[i]=='o')
s[i]='p';
if (s[i]=='u')
s[i]='v';
}
cout<<"The new string = "<<s;
return 0;
}