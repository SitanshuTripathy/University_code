#include<stdio.h>
typedef struct
{
char name[20];
int roll;
int sem;
float sb[3];

}detail;
float f1(detail *x){
float avg;
avg=((*x).sb[0]+(*x).sb[1]+(*x).sb[2])/3.0;
return avg;
}
int main(){
   detail stu;
   int j;
printf("Enter the student name :\n");
scanf("%s",stu.name);
printf("Enter the student roll:\n");
scanf("%d",&stu.roll);
printf("Enter the student sem :\n");
scanf("%d",&stu.sem);
for(int i=0;i<3;i++){
   j=i+1;
   printf("Enter the subject%d mark:\n",j);
   scanf("%f",&stu.sb[i]);
}
float a;
a = f1(&stu);
 printf("\n****Student info****\n");
    printf("Name:%s\n",stu.name);
    printf("Roll Number: %d\n",stu.roll);
    printf("Semester:%d\n",stu.sem);
    printf("Average:%5.2f",a);
return 0;
}