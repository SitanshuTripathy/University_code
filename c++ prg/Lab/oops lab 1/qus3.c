#include<stdio.h>
#include<string.h>
 typedef struct employee
{
    char c[10];
    int age ;
    int id;
    float Bs;
};

int main(){
    int n;
    printf("The number of emp:");
scanf("%d",&n);
struct employee emp[n],*ptr ;
ptr=emp;
 printf("Enter the data of Employee");
for (int i = 0; i < n; i++)
{    
    printf("\nEnter the name%d:",i+1);
    scanf("%s",&(emp[i].c));
    printf("\nEnter the age:");
    scanf("%d",&(emp[i].age));
    printf("\nEnter the id:");
    scanf("%d",&(emp[i].id));
    printf("\nEnter the Basic salary:");
    scanf("%f",&(emp[i].Bs));
}

printf("\n The details of Employees are");
for ( int i = 0; i < n; i++)
{
  printf("\n\nThe name :%s",(ptr+i)->c);
 printf("\nage:%d",(ptr+i)->age);
 printf("\nid:%d",(ptr+i)->id);
 float Gsalary= (ptr+i)->Bs+(0.8*(ptr+i)->Bs)+(0.1*(ptr+i)->Bs);
 printf("\nGross salary:%.3f",Gsalary);
 
}

return 0;
}