#include <iostream>
using namespace std;
float vol(float x){
 return((4*3.14*x*x*x)/3);    
}
float vol(float x,float y){
    return(3.14*x*x*y);
}
int vol(int a){
    return(a*a*a);
}
int main(){ 
float sp,cr,ch;
int cube;
cout<<"Enter the radius and height of the cylinder:"<<endl;
cin>>cr>>ch;
cout<<"Enter the radius of sphere :"<<endl;
cin>>sp;
cout<<"Enter the side of cube: "<<endl;
cin>>cube;
cout<<"\nVolume of cylinder = "<<vol(cr,ch);
cout<<"\nVolume of sphere = "<<vol(sp);
cout<<"\nVolume of cube = "<<vol(cube);
return 0;
}