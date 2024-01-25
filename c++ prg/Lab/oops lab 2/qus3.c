#include<stdio.h>
struct student
{
 
    int mark[3];
   
};
     

void studentwisetotal(struct student st[100],int n){
    int total;
 for (int i = 0; i < n; i++)
 {
    for (int j = 0; j <3; j++)
    {
        total=total+st[i].mark[j];
    }
    printf("total mark of student%d is %d",i+1,total);
 }   
}
    

int main(){
struct student std[100];
int n;
printf("Enter the no of students :");
scanf("%d",&n);
for (int  i = 0; i < n; i++)
{
     printf("\nEnter the marks of 3 subjects of std%d:",i+1);
     for (int j = 0; j < 3; j++)
     {
        scanf("%d",&std[i].mark[j]);
     }
 }
   
    studentwisetotal(std,n);
return 0;
}