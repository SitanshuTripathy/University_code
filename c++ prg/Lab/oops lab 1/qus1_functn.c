#include<stdio.h>
struct student{
    int roll;
    char name[80];
    float mark[5];
};
void disp(struct student st){
  //  char name;int roll;float mark[5] ;
    printf("\nName of the student: %s",st.name);
    printf("\nThe roll no: %d",st.roll);
    for (int i = 0; i < 5; i++)
    {
       printf("\nThe mark in subject%d : %0.3f",i+1,st.mark[i]);
    }
    
}
int main(){
struct student st;
printf("\n Enter the roll number :");
scanf("%d",&st.roll);
printf("\n Enter the Name :");
scanf("%s",&st.name);
for (int i = 0; i < 5; i++)
{
 printf("\n Enter the sub %d :",i+1);
scanf("%f",&st.mark[i]);
}
disp(st);

return 0;
}