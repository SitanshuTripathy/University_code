#include <iostream>
using namespace std;
class Box {
     private:
     int a;
     int b;   
   public:
      static int count;
Box(int m,int n) {
          a=m;
          b=n;
         count++;
      }
int sum() { 
         return a+b;
      }
static int getcount(){
    return count;
}
};
int Box::count = 0;

int main() {
   Box Box1(3,4);   
   Box Box2(8,1);   
cout << "Total objects: " << Box::getcount()<< endl;
return 0;
}
