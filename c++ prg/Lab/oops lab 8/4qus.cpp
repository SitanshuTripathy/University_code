#include<iostream>
#include<string>
using namespace std;

class Student
{public:
    string name;
    int id;
    void intake(){
        cout<<"\nEnter the name :";
        cin>>name;
        cout<<"\nEnter the id";
        cin>>id;
    }
    
       
};

class Sports : virtual public Student
{
    public:
    int s_grade;
    void intake(){
        cout<<"\nEnter the sports grade :";
        cin>>s_grade;  
    }
};

class Exam: virtual public Student
{
    public:
    int e_grade;
   void intake(){
        cout<<"\nEnter the exam grade :";
        cin>>e_grade;  
    }
};

class Results: public Sports, public Exam
{
public:
string result;
void taker(){
    result+=name+' ';
    result+=to_string(id)+' ';
    result+=(char)s_grade+' ';
    result+=(char)e_grade+' ';
}
void display(){
    Student::intake();
     Sports::intake();
     Exam::intake();
     taker();
    for(int i=0;i<result.size();i++){
        if(result[i]==' ')cout<<endl;
        else cout<<result[i];
    }
}
};
int main(){
Results ob;

ob.display();
return 0;   
}