#include <iostream>
using namespace std;
class dis2;
class dis1{
    int feet ;
    int inch;
public:
    void intake(){
        cout<<"Enter for distance 1-"<<endl;
        cout<<"feet=";cin>>feet;
        cout<<"inche=";cin>>inch;
        }
    friend void comp(dis1 , dis2 ) ;   
    
};
class dis2{
    int meter ;
    int cm;
public:
    void intake(){
        cout<<"Enter for distance 2-"<<endl;
        cout<<"meter=";cin>>meter;
        cout<<"cm=";cin>>cm;
        }    
        friend void comp(dis1 , dis2 ) ;   
        };
void comp(dis1 a , dis2 b){
    if((a.feet * 0.025)<b.meter){
        cout<<"distance2 is greater tham distance 1";
    }
    else 
    cout<<"Distance1 is greater than distance2";

}
int main(){ 
dis1 obj1;
dis2 obj2;
obj1.intake();
obj2.intake();
comp(obj1,obj2);
return 0;
}