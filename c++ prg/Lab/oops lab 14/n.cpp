#include <iostream>
#include <fstream>
using namespace std;
class student
{
    long long int roll;
    char name[20];
    int marks[3];
    char gender;

public:
   
     void display(){
        ifstream fin;
        fin.open("student.txt");

        string s;

        while (getline(fin,s))
        {
            cout<<s<<endl;
            
        }

        fin.close();
        

    }


    
};
int main() 
{

    student st;
 
    // st.getInput();
    st.display();

 
}