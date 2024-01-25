#include <iostream>
using namespace std;
template<class t ,class u>
class sum{
t a;
u b;
public:
sum(t a,u b){
this->a=a;
this->b=b;
}
u add(){
    return a+b;
}
};
int main(){ 
    
sum<int,double>ob(7,1.1);
cout<<ob.add();
return 0;
}