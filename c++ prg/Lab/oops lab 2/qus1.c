#include<stdio.h>
struct student
{
    char s[100];
    int roll;
    int mark[3];
    int total;
};

void f1(struct student st[100]){
   
    for (int i = 0; i < 2; i++)
    { if(st[i].total==st[i+1].total)
     printf("\nstudent%d is equal student%d",i,i+1);
     else if(st[i].total>st[i+1].total)
     printf("\nstudent%d has more mark then student%d",i,i+1);
     else if(st[i].total<st[i+1].total)
     printf("\nstudent%d has more mark then student%d",i+1,i);
    
    }
}

int main(){
struct student std[100];

printf("Enter data of 2 students :");

for (int  i = 0; i < 2; i++)
{
    printf("\nEnter the std%d name :",i+1);
    scanf("%s",&std[i].s);
     printf("\nEnter the roll no :");
     scanf("%d",&std[i].roll);
     printf("\nEnter the marks of 3 subjects:");
     for (int j = 0; j < 3; j++)
     {
        scanf("%d",&std[i].mark[j]);
     }
 }
 for (int i = 0; i < 2; i++)
 {
    for (int j = 0; j <3; j++)
    {
        std[i].total=std[i].total+std[i].mark[j];
    }
    
 }
 
    
 f1(std);
return 0;
}