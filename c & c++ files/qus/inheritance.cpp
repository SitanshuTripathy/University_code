#include <iostream>
using namespace std;
class A
{
    public:
    int x=10;
};
class B:public A
{
    int y;
    public:
    void sum()
    {
        cout<<"Enter value of y =";
        cin >>y;
        int sum=x+y;
        cout<<"sum="<<sum;
    }
};
int main() {
    B ob;
    ob.sum();

    return 0;
}
