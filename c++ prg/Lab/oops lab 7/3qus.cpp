#include <iostream>
using namespace std;
class bank{
char name[50];
int accno;
char type[50];
int bal;
public:
bank (char name[],int accno,char type[50],int bal){
   for(int i=0;i<50;i++)this->name[i]=name[i];
    this->accno=accno;
    this->bal=bal;
    for(int i=0;i<50;i++)this->type[i]=type[i];
}
bank(int amt,bank* ob){
  ob->bal=ob->bal+amt;
  cout<<"\nThe new balance = "<<ob->bal;
}
bank(int wd,char  ,bank* ob){
    char a;
if(a='w'){
if(ob->bal>wd){
   ob->bal=ob->bal-wd;
  cout<<"\nThe amount withdrawn ="<<wd;
cout<<"\nThe balace remained ="<<ob->bal;
}
}
}
void display(){
    cout<<"\nThe name of account holder :"<<name;
    cout<<"\nThe account number :"<<accno;
    cout<<"\nThe account type is :"<<type;
    cout<<"\nThe balance left is :"<<bal;
}
};
int main(){ 
int num,bn,wd,amt;
char n[50],m[50];
cout<<"Enter the name of account holder :";cin>>n;
cout<<"Enter the account number :";cin>>num;
cout<<"Enter the type of account :";cin>>m;
cout<<"Enter the balance present :";cin>>bn;
bank ob(n,num,m,bn);
cout<<"Enter the amount to be deposit :";cin>>amt;
bank ob1(amt,&ob);
cout<<"\nEnter the amount to be withdrawn :";cin>>wd;
bank ob2(wd,'w',&ob);
ob.display();
return 0;
}