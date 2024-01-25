#include <iostream>
using namespace std;
class stu
{
public:
char name[50];
int roll;
int totalmark;

public:
 void intake(){
    cout<<"Enter the name :";
    cin>>name;
 cout<<"Enter the roll :";
    cin>>roll;
     cout<<"Enter the total mark :";
    cin>>totalmark;
}   
 void disp(){
    cout<<"The name :"<<name<<endl;
    cout<<"the roll :"<<roll<<endl;
    cout<<"The toatl mark:"<<totalmark<<endl;
}
};
int main(){
    stu ob;
    ob.intake();
    ob.disp();
    return 0;
}
