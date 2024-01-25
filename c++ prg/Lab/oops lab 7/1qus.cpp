#include <iostream>
using namespace std;
class point{
int x;
int y;
public:
point (int x ,int y){
    this->x=x;
    this->y=y;
    cout<<"The coordinate of x="<<x<<" y="<<y;
}
};
int main(){
point ob(4,5);

return 0;
} 