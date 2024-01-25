#include<stdio.h>

int main(){

struct student{
    int roll;
    char name[80];
    float mark1,mark2,mark3,mark4,mark5;
};
struct student stud1;
printf("\n Enter the roll number :");
scanf("%d",&stud1.roll);
printf("\n Enter the Name :");
scanf("%s",&stud1.name);
printf("\n Enter the sub 1 :");
scanf("%f",&stud1.mark1);
printf("\n Enter the Sub 2 :");
scanf("%f",&stud1.mark2);
printf("\n Enter the sub 3 :");
scanf("%f",&stud1.mark3);
printf("\n Enter the sub 4 :");
scanf("%f",&stud1.mark4);
printf("\n Enter the sub 5 :");
scanf("%f",&stud1.mark5);

printf("\n*****STUDENT DETAILS******");
printf("\nRoll no:%d",stud1.roll);
printf("\nname:%s",stud1.name);
printf("\nmark in subject 1:%f",stud1.mark1);
printf("\nmark in subject 2:%f",stud1.mark2);
printf("\nmark in subject 3:%f",stud1.mark3);
printf("\nmark in subject 4:%f",stud1.mark4);
printf("\nmark in subject 5:%f",stud1.mark5);
return 0;
}