#include <iostream>
using namespace std;
template <class t>
t sum(t a,t b,t c){
return a+b+c;
}
template <class v>
v sum(v a,v b){
return a+b;
}
int main(){ 
int m,n,p;
double a,b,c;
cout<<"\nEnter m=";cin>>m;
cout<<"\nEnter n=";cin>>n;
cout<<"\nEnter p=";cin>>p;
cout<<"\nEnter a=";cin>>a;
cout<<"\nEnter b=";cin>>b;
cout<<"\nEnter c=";cin>>c;
cout<<sum(n,m,p)<<endl;
cout<<sum(a,b,c)<<endl;
cout<<sum(n,m)<<endl;
cout<<sum(a,b)<<endl;
return 0;
}