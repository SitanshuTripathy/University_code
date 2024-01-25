#include <iostream>
using namespace std;
class stu
{
public:
   char name[50];
int roll;
int mark[5];
float totalmark;

public:
 void intake(){
    cout<<"Enter the name :";
    cin>>name;
 cout<<"Enter the roll :";
    cin>>roll;
     cout<<"Enter the  mark of 5 subjects :";
    for (int i = 0; i < 5; i++)
    {
        cin>>mark[i];
    }
    
}   
 void disp(){
    cout<<"The name :"<<name<<endl;
    cout<<"The roll :"<<roll<<endl;
    for (int i = 0; i < 5; i++)
    {
        totalmark=totalmark+mark[i];
    }
    cout<<"the total mark :"<<totalmark<<endl;
    float pr=(totalmark/500)*100;
    cout<<"the percentage :"<<pr<<endl;
}
};
int main(){
    stu ob;
    ob.intake();
    ob.disp();
    return 0;
}
