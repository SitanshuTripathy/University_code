#include <iostream>
using namespace std;
int main(){ 
int n;
cin>>n;
char m;
cin>>m;    
int i=1;
while (i<=n)
{
int j=1;

while (j<=i)
{
   cout<<" "<<m;
   m--;
   j++; 
}
cout<<endl;
i++;
m=m+i;
}
return 0;
}