#include<stdio.h>
typedef struct
{
    int id;
    char name[10];
    double basicsalary;
    double grosssalary;
} 
employee;

int main()
{
    employee emp1,emp2,emp3;

    printf("Enter name of employee-1:\n");
    scanf(" %s",emp1.name);
    printf("Enter ID of employee-1:\n");
    scanf("%d",&emp1.id);
    printf("Enter basic salary of employee-1:\n");
    scanf("%lf",&emp1.basicsalary);

    printf("Enter name of employee-2:\n");
    scanf(" %s",emp2.name); 
    printf("Enter ID of employee-2:\n");
    scanf("%d",&emp2.id);
    printf("Enter basic salary of employee-2:\n");
    scanf("%lf",&emp2.basicsalary);

    printf("Enter name of employee-3:\n");
    scanf(" %s",emp3.name);
    printf("Enter ID of employee-3:\n");
    scanf("%d",&emp3.id);
    printf("Enter basic salary of employee-3:\n");
    scanf("%lf",&emp3.basicsalary);

    printf("Employee-1 info:\n");
    printf("Name:%s\n",emp1.name);
    printf("ID:%d\n",emp1.id);
    printf("Basic Salary:%lf\n",emp1.basicsalary);

    emp1.grosssalary=emp1.basicsalary+((0.1)*(emp1.basicsalary))+((0.2)*(emp1.basicsalary));

    printf("Gross Salary:%2.lf\n",emp1.grosssalary);
    printf("Employee-2 info:\n");
    printf("Name:%s\n",emp2.name);
    printf("ID:%d\n",emp2.id);
    printf("Basic Salary:%f\n",emp2.basicsalary);

    emp2.grosssalary=emp2.basicsalary+((0.1)*(emp2.basicsalary))+((0.2)*(emp2.basicsalary));

    printf("Gross Salary:%f\n",emp2.grosssalary);

    printf("Employee-3 info:\n");
    printf("Name:%s\n",emp3.name);
    printf("ID:%d\n",emp3.id);
    printf("Basic Salary:%lf\n",emp3.basicsalary);

    emp3.grosssalary=emp3.basicsalary+((0.1)*(emp3.basicsalary))+((0.2)*(emp3.basicsalary));

    printf("Gross Salary:%lf\n",emp3.grosssalary);

    return 0;
}