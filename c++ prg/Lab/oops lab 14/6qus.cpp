#include <iostream>
#include <fstream>
using namespace std;
int main()
{
   ifstream fout;
   fout.open("country.txt");
   ifstream fout1;
   fout1.open("city.txt");
   ofstream result;
   result.open("result.txt");
   string s;
   string s2;
   while (getline(fout, s) && getline(fout1, s2))
   {
      result << s << endl;
      result << s2 << endl;
   }
ifstream fin;
fin.open("result.txt");
string s3;
while (getline(fin,s3))
{
   cout<<s3<<endl;
}
fin.close();


   fout1.close();
   fout.close();
   result.close();

   return 0;
}