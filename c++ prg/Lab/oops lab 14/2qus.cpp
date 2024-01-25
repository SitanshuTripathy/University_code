#include<iostream>
#include<fstream>
using namespace std;

// define a class to store student data
class student
{
   int roll,total;
   char name[30],gender;
   float phy, chem,math;
public:
   void getdata(){
      cout<<"enter the roll no.:";
      cin>>roll;
      cout<<"enter the name of the student:";
      cin>>name;
      cout<<"enter the gender of the student:";
      cin>>gender;
      cout<<"enter the marks of physics:";
      cin>>phy;
      cout<<"enter the marks of Chemistry:";
      cin>>chem;
      cout<<"enter the marks of math:";
      cin>>math;
   } 
   void displaydata(){
      total=phy+chem+math;
      cout<<"display the roll no.="<<roll<<endl;
      cout<<"display the name of the student="<<name<<endl;
      cout<<"display the gender of the student"<<gender<<endl;
      cout<<"display the marks of physics="<<phy<<endl;
      cout<<"display the marks of chemistry="<<chem<<endl;
      cout<<"display the marks of mathematics="<<math<<endl;  
      cout<<"total marks scored=" <<total<<endl;
   } // displaying data
};

int main()
{
   student s[3]; // array of 3 student objects
   int i;
   ofstream file1("student.txt");
   cout << "\nWriting Student information to the file :- " << endl;
   cout << "\nEnter 3 students Details to the File :- " << endl;

   for (i = 0; i < 3; i++)
    {
      s[i].getdata();
      // write the object to a file
      file1.write((char *)&s[i], sizeof(s[i]));
    }

   file1.close(); // close the file
   ifstream file2("student.txt");
   cout << "\nReading Student information to the file :- " << endl;

   for (i = 0; i < 3; i++)
    {
      // read an object from a file
      file2.read((char *)&s[i], sizeof(s[i]));
      s[i].displaydata();
    }

   file2.close(); // close the file

   return 0;
}