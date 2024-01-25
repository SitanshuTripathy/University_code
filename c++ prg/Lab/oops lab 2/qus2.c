#include <stdio.h>
struct marks{
int sub1;
int sub2;
int sub3;
int sub4;
int total;
};
int main(){
int a,i,b=0,c=0,d=0,e=0;                
printf("Enter the total no.of sts in the class :- ");
 scanf("%d",&a);
struct marks st[a];
 int total=0;
 printf("Enter the number per subject per student  \n");
 for(i=0;i<a;i++) {
printf("student %d  \n",i+1);     
 printf("SUBJECT1 :- ");
scanf("%d",&st[i].sub1);
 printf("SUBJECT2 :- ");
 scanf("%d",&st[i].sub2);
printf("SUBJECT3 :- ");
scanf("%d",&st[i].sub3);
printf("SUBJECT4 :- ");
 scanf("%d",&st[i].sub4);
}
for(i=0;i<a;i++){
 st[i].total=0;
}
 for(i=0;i<a;i++){
st[i].total=st[i].sub1+st[i].sub2+st[i].sub3+st[i].sub4;
b+=st[i].sub1;
 c+=st[i].sub2;
d+=st[i].sub3;
 e+=st[i].sub4;
 }
for(i=0;i<a;i++)
{
total+=st[i].total;
}         
 for(i=0;i<a;i++) {
  printf("Total marks of st %d is :- %d\n",i+1,st[i].total);

            }
printf("The Total marks of subject 1 :- %d\n",b);
printf("The Total marks of subject 2 :- %d\n",c);
 printf("The Total marks of subject 3 :- %d\n",d);
printf("The Total marks of subject 4 :- %d\n",e);
printf("The grand total marks of whole class is :- %d",total);

return 0;

}