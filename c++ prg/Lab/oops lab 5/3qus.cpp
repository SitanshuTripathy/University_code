#include <iostream>
using namespace std;
class number{

    int a;
    static int count;
    static int count2;
    public:
    void input(); 
    void output();
    void num();
};
int number:: count=0;
int number::count2=0;
void number ::input(){
    cout<<"Enter the a=";cin>>a;count++;
    }
 void number ::output(){
        cout<<"The a="<<a;count2++;
    }
void number  ::num(){
        cout<<"The count is ="<<count<<"and count2 ="<<count2;
    }

int main(){ 
number ob;
ob.input();
ob.output();
ob.num();
return 0;
}