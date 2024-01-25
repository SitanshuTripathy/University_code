#include <iostream>
#include <fstream>
using namespace std;
class student
{
    long long int roll;
    char name[20];
    int marks[3];
    char gender;
int total;
public:
    void getInput()
    {
        ofstream fout;
        fout.open("student.txt");
        cout << "Enter roll number: ";
        cin >> roll;
        fout << "Roll :" << roll << endl;

        cout << "Enter name: ";
        cin >> name;
        fout << "Name :" << name << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter marks in " << i + 1 << " ";
            cin >> marks[i];
            fout << "Marks " << i + 1 << ": " << marks[i] << endl;
        }
        cout << "Enter gender: ";
        cin >> gender;
        fout << "Gender : " << gender<<endl;
 for (int i = 0; i < 3; i++)
        {
            total=total+marks[i];
} fout << "total " << ": " << total << endl;
        fout.close();
    }
};
int main() 
{

    student st;
   st.getInput();
  

  
}