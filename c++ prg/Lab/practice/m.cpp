#include<iostream>
using namespace std;
class xyz{
    int *p,*q;
    public:
    xyz(){
        p=new int;
        q=new int;
    }
    xyz(){
        cout<<"Enter the value of p:";
        cin>>*p;
        cout<<"Enter the value of q:";
        cin>>*q;
        int sum=*p+*q;
    }
    void display(){
        cout<<"the sum is="<<(*p+*q);
    }
};
int main(){
    xyz ob;
    ob.display();
    return 0;

}