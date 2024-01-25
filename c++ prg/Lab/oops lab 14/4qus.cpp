#include <iostream>
#include <fstream>
using namespace std;
class student
{
 

public:
   


    void countCharacter(){
        char c;
        ifstream fin;
        int count=0;
        fin.open("student.txt");

        while (fin>>c)
        {
            count++;
        }

        cout<<"The character no is : "<<count;
        

    }


    void counNewLine(){

         string c;
        ifstream fin;
        int count=0;
        fin.open("student.txt");

        while (getline(fin,c))
        {
            count++;
        }
        cout<<"The line no is : "<<count;
       fin.close();

    }

    void countTab(){

         char c;
        ifstream fin;
        int count=0;
        fin.open("student.txt");

        while (fin)
        {
            fin.get(c);
            // char ch = fgetc(fin);
            if(c==' '){
            count++;
            }
        }
        cout<<"The line no is : "<<count;
       fin.close();

    }
   
    
};
int main() 
{

    student st;
 
   

   st.counNewLine();
     st.countCharacter();
}