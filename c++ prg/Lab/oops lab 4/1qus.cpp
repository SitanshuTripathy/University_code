#include<iostream>

using namespace std;
class name{
    private:
    char Name[50];
    public:
    void input(){
        cout<<"enter the name: ";
    cin>>Name;
}
    void display(){
        cout<<" \"hello\" "<<Name<<endl;
    }
};
int main()
{
    name ob;
    ob.input();
    ob.display();
    return 0;
}