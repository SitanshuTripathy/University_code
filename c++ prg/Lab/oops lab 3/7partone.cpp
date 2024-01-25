#include <iostream>
using namespace std;
int main(){ 
int n,s,t=0,i,j;
cout<<"Enter the value of n :";
cin>>n;

  for(i=1;i<=n;i++)
    {
                s=0;
                for(j=1;j<=i;j++)
                {
                    s=s+j;
                }
                t=t+s;
        }
        cout<<"The sum is:"<<t;
return 0;
}