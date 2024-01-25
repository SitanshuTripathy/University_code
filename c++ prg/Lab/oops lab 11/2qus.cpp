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
    cout<<"-----The details are ----"<<endl;
    
    cout<<itemnum<<"-->"<<price<<endl;   
    
}
};

int main(){ 
    int n;
cout<<"Enter the size = ";cin>>n;
item ob[n],*p;
cout<<"\nEnter  prd "<<endl;
for(int i=0;i<n;i++)
ob[i].input();

p=&ob[0];
for(int i=0;i<n;i++,p++)
p->display();
/*item * ob1=new item[n];
cout<<"\nEnter  prd "<<endl;
for(int i=0;i<n;i++)
ob1[i].input();

ob->display(n);
ob1->display(n);*/
return 0;
}