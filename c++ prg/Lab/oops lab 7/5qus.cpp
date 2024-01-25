#include <iostream>
using namespace std;
class timer{
    int hr;
    int min;
    int sec;
    public:
    timer(int a,int b,int c){
        hr=a;
        min=b;
        sec=c;
    }
    timer(int a,int b){
        hr=a;
        min=0;
        sec=b;
    }
    void display(){
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
};
int main(){
   timer ob(3,4,5);
   timer ob2(1,2);
   ob.display();
   ob2.display();
return 0;
} 
