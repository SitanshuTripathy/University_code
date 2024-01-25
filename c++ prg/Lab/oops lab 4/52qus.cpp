#include <iostream>
using namespace std;
 class dist {
    private:
        int feet;
        int inch;
    public:
        void intake(){
			 cout << " feet: "; cin >> feet;
    cout << "inches: "; cin >> inch;
		};
		
        void display(){
 cout << "feet: " << feet;
    cout << " inches: " << inch;
		};
        
		dist add( dist d ){

			dist dis;
 
    dis.feet = feet + d.feet;
    dis.inch = inch + d.inch;
 
    if(dis.inch >= 12) {
        dis.feet++;
        dis.inch -= 12;        
    }
    return dis;    
}
};
int main() {
  dist c1, c2, c3;

    cout << "Enter length of Distance 1: " << endl;
    c1.intake();
    cout << "Enter length of Distance 2: " << endl;
    c2.intake();
	c3 = c1.add(c2);
    cout << "Sum of Distance 1 and Distance 2:" << endl;
    c3.display();
    return 0;
}