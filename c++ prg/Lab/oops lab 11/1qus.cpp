#include <iostream>
using namespace std;
class item{
int itemnum;
int price;
public:
void input(){
    cout<<"\nEnter item number = ";cin>>itemnum;
     cout<<"\nEnter item price = ";cin>>price;
}
void display(){
    cout<<"The details are ----"<<endl;
    cout<<itemnum<<"-->"<<price<<endl;   
}
};
int main(){ 
item ob,*p;
cout<<"\nEnter  prd "<<endl;

ob.input();
ob.display();
p=&ob;
p->display();

/*item * ob1=new item;
cout<<"\nEnter  prd "<<endl;
ob1->input();

ob.display();
ob1->display();*/
return 0;
}