#include <iostream>
using namespace std;
class book{
    char name[50];
    char author[50];
    double price;
    void intake(){
        cout<<"\nEnter the book name ";
        cin>>name;
         cout<<"Enter the author name ";
        cin>>author;
         cout<<"Enter the book price ";
        cin>>price;
    }
    void show(){
        cout<<"\nThe name of the book:"<<name;
        cout<<"\nThe name of the author: "<<author;
        cout<<"\nBook Price="<<price;
        }
   friend void input(book[],int,int ,int);     
};
void input(book a[],int n,int l,int h){
    for(int i=0;i<n;i++)
    a[i].intake();
    for(int i=0;i<n;i++)
        if (a[i].price<=h && a[i].price>=l)
                 a[i].show();         
    }
int main(){ 
int n,l,h;
cout<<"Enter the number of book :";
cin>>n;
book a1[n];
cout<<"Enter Lower Bound";
cin>>l;
cout<<"Enter Upper Bound";
cin>>h;
    input(a1,n,l,h);
return 0;
}