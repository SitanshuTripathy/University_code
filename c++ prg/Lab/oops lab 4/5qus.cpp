#include <iostream>
using namespace std;
class dist
{
public:
   int feet;
   int inch;
void intake(){
cout<<"Enter the distance in feet:";
cin>>feet;
cout<<"Enter the distance in inch:";
cin>>inch;
}
void add(dist d1, dist d2)
		{
			feet = d1.feet + d2.feet;
			inch = d1.inch + d2.inch;
			feet = feet + (inch / 12);
			inch = inch % 12;
		}
void display()
		{
			cout<<"Total distance is feet= "<<feet<<", inches= "<<inch<<endl;
		}
};
int main(){
dist c1 ,c2,c3;
cout << "Enter length of Distance 1: " << endl;
c1.intake();
 cout << "Enter length of Distance 2: " << endl;
c2.intake();
c3.add(c1,c2);
cout << "Sum of Distance 1 and Distance 2:" << endl; 
c3.display();

    return 0;
}