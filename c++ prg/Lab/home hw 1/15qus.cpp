//sitanshu
#include <iostream>
using namespace std;
int main(){ 
char s[50];
char ch;
cout<<"Enter the string :";
cin>>s;
cout<<"Enter the character :";
cin>>ch;
 int count = 0;
   for(int i = 0; s[i] != '\0'; i++) {
      if(s[i] == ch)
      count++;
   }
   cout<<"Frequency of alphabet "<<ch<<" in the string is "<<count;

return 0;
}