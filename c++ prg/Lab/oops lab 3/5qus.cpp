#include <iostream>
using namespace std;

int main() {

  int year;
  cout << "Enter a year: ";
  cin >> year;
  
 if(((year%4==0) && ((year%400==0) || (year%100!=0))))
    {  
     cout<<"This is the leap year"<<endl; 
    } else {  
      cout<<"This is not leap year"<<endl;  
    } 

  return 0;
}