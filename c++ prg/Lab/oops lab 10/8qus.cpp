#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet=10;           
      int inches=12;           
      
   public:
Distance operator()(int a, int b, int c) {
Distance D;
    D.feet = a + c + 10;
     D.inches = b + c + 100 ;
     return D;
    }
void displayDistance() {
     cout << "F: " << feet << " I:" << inches << endl;
    }   
};

int main() {
   Distance D1, D2;

   cout << "First Distance : "; 
   D1.displayDistance();

   D2 = D1(10, 10, 10);
   cout << "Second Distance :"; 
   D2.displayDistance();

   return 0;
}