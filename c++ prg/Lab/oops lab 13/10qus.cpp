#include <iostream>
using namespace std;
template <class t,int size>
class A{
t stack[size];
public:
void push(t element)
{
    
    if (top >= 100)
    {
        cout<<"\nError! Stack overflow detected!!.\n";
        return;
    }
     top++;
    stack[top] = element;
    
}

t pop()
{
   
    if (top < 0)
    {
        
        return INT_MIN;
    }
    else
    {
       return stack[top--];
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(int i=top; i>=0; i--)
            cout<<stack[i];
        
    }
   
}

};
int main(){ 

return 0;
}