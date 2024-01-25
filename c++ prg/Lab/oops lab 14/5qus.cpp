#include <iostream>
#include <fstream>
using namespace std;
class student
{
  public:
   void countword(){
        string s;
        ifstream fin;
        int count = 0;
        fin.open("student.txt");
        while (fin>>s)
        {
            count++;
        }
        cout<<"No of words are: "<<count<<endl;
        fin.close();
        
   }
    
};
int main() 
{

    student st;
 
   st.countword();

}