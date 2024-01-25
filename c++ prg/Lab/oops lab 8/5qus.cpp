#include<iostream>
using namespace std;

class Student
{
	protected:
		int roll,age;
		char name [20];
};

class UG : public Student
{
	protected:
	int sem,fees,stipend;

	public:
	void get_data()
	{
		cout<<"\nEnter Roll Number : " ;
		cin>>roll;
		cout<<"\nEnter Name: ";
		cin>>name;
		cout<<"\nEnter Age : ";
		cin>>age;
		cout<<"\nEnter Semester : ";
		cin>>sem;
		cout<<"\nEnter Fee : ";
		cin>>fees;
		cout<<"\nEnter Stipend : ";
		cin>>stipend;
	}

void display()
	{
		cout<<name<<"\t"<<age<<"\t"<<sem<<"\n";
	}



	int get_age()
	{
		return(age);
	}

};

class PG : public Student
{
	protected:
	int sem,fees,stipend;

	public:
	void get_data()
	{
		cout<<"\nEnter Roll Number : " ;
		cin>>roll;
		cout<<"\nEnter Name: ";
		cin>>name;
		cout<<"\nEnter Age : ";
		cin>>age;
		cout<<"\nEnter Semester : ";
		cin>>sem;
		cout<<"\nEnter Fee : ";
		cin>>fees;
		cout<<"\nEnter Stipend : ";
		cin>>stipend;
	}

	void display()
	{
		cout<<name<<"\t"<<age<<"\t"<<sem<<"\n";
	}



	int get_age()
	{
		return(age);
	}

};

int main()
{
    PG pg[5];
	UG ug[5];

	int flag,age,sem,agesum=0,semcnt=0,i,j;

	cout<<"\n\nEnter PG students details..\n";
	for(i=0; i<5; i++ )
		pg[i].get_data();

	cout<<"\n\nEnter UG students details..\n";
	for(i=0; i<5; i++ )
		ug[i].get_data();

	cout<<"\nUG - students details..\n";

	cout<<"Name\tAge\tSem\n";
	for(i=0; i<5; i++ )
		ug[i].display();



		for(j=0; j<5; j++ )
		{

			age=ug[j].get_age();


				agesum+=age;


		}

	   cout<<"Average age of UG Students : "<<"\t"<<agesum/5<<endl;


	agesum=0;

	cout<<"\n\nPG - students details..\n";

	cout<<"Name\tAge\tSem\n";
	for(i=0; i<5; i++ )
		pg[i].display();



		for(j=0; j<5; j++ )
		{

			age=pg[j].get_age();


				agesum+=age;


		}

			cout<<"Average age of PG Students : "<<"\t"<<agesum/5<<endl;



	return 0;

}