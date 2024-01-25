#include <iostream>
using namespace std;
template <class t,int size>
class A{
t a[size];
public:
void input(){
    cout<<"\nEnter value =";
    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }}
t sort()
{
    t temp; int min ,i,j;
   for (i = 0; i <size ; i++) {
      min = i;
      for (j = i + 1; j < size; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
   cout<<endl;
   
   for ( i = 0; i <size; i++)
   {
    cout<<"\t"<<a[i];
   }
   return 0;
}
};
int main(){ 
A<int,3>ob;
ob.input();
ob.sort();
A<double,3>ob2;
ob2.input();
ob2.sort();
return 0;
}