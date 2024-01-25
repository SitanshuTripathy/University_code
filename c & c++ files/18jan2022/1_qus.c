#include<stdio.h>

int main(){
struct student
{
    int roll;
    char name[50];
    float CGPA;
};
struct student stud1;
printf("\nEnter the roll no:");
scanf("%d",&stud1.roll);
printf("\nEnter the name:");
scanf("%s",&stud1.name);
printf("\nEnter the CGPA:");
scanf("%f",&stud1.CGPA);
printf("***STUDENT DETAILS***");
printf("\nThe roll no:%d",stud1.roll);
printf("\nName:%s",stud1.name);
printf("\nCGPA:%f",stud1.CGPA);
return 0;
}