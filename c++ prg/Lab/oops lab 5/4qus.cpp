#include <iostream>
using namespace std;
class Student{
    private:
        string name;
        int rollno;
    public:
        int total[50];
        void getDetails(int x){
            for(int i=0;i<x;i++){
                cout<<"\nEnter details for student "<<i+1<<": ";
                cout<<"\nName: ";
                cin>>name;
                cout<<"\nRoll no: ";
                cin>>rollno;
                cout<<"\nTotal: ";
                cin>>total[i];
            }
        }
        
};
void getAverage(Student s, int n){
   
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+s.total[i];
    }
    double average=double(sum)/(double)n;
    cout<<"\nAverage is "<<average;
}
int main()
{
    Student s1;
    int x,n;
    cout<<"Enter the no of student:";cin>>x;
    cout<<"\nEnter the no of student for avg:";cin>>n;
s1.getDetails(x);
    getAverage(s1,n);


    return 0;
}