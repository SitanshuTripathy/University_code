#include <iostream>
using namespace std;

class employee
{   char name[90];
	int age;
	int basic,DA,HRA;
	double gross;
public:
		void input() 
		{
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter Age: ";
			cin>>age;
			cout<<"Enter Basic salary: ";
			cin>>basic;	
		
			DA=0.8*basic;
			HRA=0.1*basic;
			gross=basic+DA+HRA;
		}
		void display() 
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Basic salary = "<<basic<<endl;
			cout<<"Gross salary = "<<gross<<endl;
			}	
};

int main()
{
	int n=0;
	cout<<"Enter number of employees: ";
	cin>>n;
    employee emp[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Enter Employee "<<i+1<<" Details"<<endl;
		emp[i].input();		
	}
    cout<<endl;
    for(int i=0; i<n; i++)
	{
		cout<<"Employee "<<i+1<<" : "<<endl;
		emp[i].display();
		cout<<endl;	
	}
	return 0;
}
