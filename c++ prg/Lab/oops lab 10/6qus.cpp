#include <iostream>
using namespace std;
class TIME{
int hr;
int min;
int sec;
public:
void input(){
cout<<"\nEnter hr= ";cin>>hr;
cout<<"\nEnter min= ";cin>>min;
cout<<"\nEnter sec= ";cin>>sec;
}
void operator +=(TIME ob2){
    hr+=ob2.hr;
    min+=ob2.min;
    sec+=ob2.sec;
    cout<<"\nThe hr= "<<hr<<" min= "<<min<<" sec= "<<sec;
    }
void operator -=(TIME ob2){
    hr-=ob2.hr;
    min-=ob2.min;
    sec-=ob2.sec;
    cout<<"\nThe hr= "<<hr<<" min= "<<min<<" sec= "<<sec;
    }
void operator *=(TIME ob2){
    hr*=ob2.hr;
    min*=ob2.min;
    sec*=ob2.sec;
    cout<<"\nThe hr= "<<hr<<" min= "<<min<<" sec= "<<sec;
    }
void operator /=(TIME ob2){
    hr/=ob2.hr;
    min/=ob2.min;
    sec/=ob2.sec;
    cout<<"\nThe hr= "<<hr<<" min= "<<min<<" sec= "<<sec;
    }        
};
int main(){ 
    TIME ob;
    ob.input();
    TIME ob2;
    ob2.input();
    ob+=ob2;
    ob-=ob2;
    ob*=ob2;
    ob/=ob2;
return 0;
}