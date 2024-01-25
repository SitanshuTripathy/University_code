#include<stdio.h>
#include<stdlib.h>
struct student_info
{
    int roll_no;
char name [50];
float CGPA;
struct dob {
    int age;
}db;
}st;
void trav(struct student_info st){
printf("roll = %d \n name = %s \n cgpa = %0.2f\ndob=%d \n",st.roll_no,st.name,st.CGPA,st.db.age );
}
void display(struct student_info *st){
printf("roll = %d \n name = %s \n cgpa = %0.2f\ndob=%d \n",st->roll_no,st->name,st->CGPA,st->db.age );
}


int main(){
 printf("Enter the details : \n");
 printf("roll = ");scanf("%d",&st.roll_no);
  printf("name = ");scanf("%s",&st.name);
   printf("CGPA = ");scanf("%f",&st.CGPA);
    printf("DOB = ");scanf("%d",&st.db.age);
trav(st);
display(&st);
return 0;
}