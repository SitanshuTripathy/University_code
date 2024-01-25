#include<iostream>

using namespace std;

class Student
{public:
    char name;
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
        cout<<"\nEnter the sports mark :";
        cin>>s_grade;  
    }
};

class Exam: virtual public Student
{
    public:
    int e_grade[5],total=0;
   void intake(){
        cout<<"\nEnter the 5 sub exam mark :";
        for (int i = 0; i < 5; i++)
        {
            cin>>e_grade[i]; 
        } 
        
     cout<<"\nThe total exam mark =";
 for (int i = 0; i < 5; i++)
        {
             total=total+e_grade[i];
        } 
    }
};

class Results: public Sports, public Exam
{
public:
int result;
void taker(){

result=s_grade+total;
    
cout<<result;  
}
void display(){
    Student::intake();
    
     taker();

    }

};
int main(){
Results ob;

ob.display();
return 0;   
}