#include<iostream>
#include<stdio.h>
using namespace std;

class vector
{
        int size;
        int *coord;
    public:
        vector();     
        void modify();
        void display();
        void multiply();
};
vector::vector()
{
        cout<<"\n Enter Number of Co-ordinates : ";
        cin>>size;
         coord=new int[size];
        cout<<"\n Enter " << size << " Co-ordinates : \n";
        for(int i=0; i<size; i++)
        {
                cout<<" ";
                cin>>coord[i];
        }
}
void vector::modify()   //Function for Modifying the Co-ordinates
{
        cout<<endl<<"\n Enter " << size << " New Co-ordinates : \n";
        for(int i=0; i<size; i++)
        {
                cout<<" ";
                cin>>coord[i];
        }
        }
void vector::multiply()   //Multiplying the Co-ordinates
{
        int num;
        cout<<endl<<"\n Enter Number to Multiply : ";
        cin>>num;
        for(int i=0; i<size; i++)
        {
                coord[i]=coord[i]*num;     //Multiplying the co-ordinates with the number entered by the user
        }
}
void vector::display()  //Displaying the vector
{
        cout<<"\n Vector : (";
        for(int i=0; i<size; i++)
        {
                cout<<coord[i];
                if(i!=size-1)
                        cout<<",";
                           }
        cout<<")";
}
int main()
{
        vector v;
        v.display();
        v.modify();
        v.display();
        v.multiply();
        v.display();
        return 0;
}