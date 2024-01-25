#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the amount"<<endl;
    int amount;int a,b;
    cin>>amount;
    int m=1;
    switch (m){
        case 1:
        a=amount/500;
      
        cout<<"RS 500 ="<<a<<endl;
        case 2:
        a=a/100;
     
        cout<<"RS 100 ="<<a<<endl;
        case 3:
        a=a/20;
    
        cout<<"RS 20 ="<<a<<endl;
        case 4:
        a=a/10;
   
        cout<<"RS 20 ="<<a<<endl;
        
default:
if (amount==0)
 {
    cout<<"no of notes = 0";
 }
 
    break;

    }
    return 0;
}