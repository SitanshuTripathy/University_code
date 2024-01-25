#include<stdio.h>
struct stud
{
 char name[50];
 int roll;
float mark[5];  float totalmark,percentage;
};
void disp(struct stud s[100],int n){
 for (int i = 0; i < n; i++)
{
   printf("\nThe name of student%d :%s",i+1,s[i].name);
    printf("\nThe roll:%d ",s[i].roll);
   printf("\nThe marks in sorted order:");
   for (int j = 0; j < 5; j++)
   {for (int x = j+1; x < 5; x++)
   { if (s[i].mark[j]>s[i].mark[x])
   {
     int temp=s[i].mark[j];
     s[i].mark[j]=s[i].mark[x];
     s[i].mark[x]=temp;
   }
   }
     printf(" %0.2f",s[i].mark[j]);
   
     s[i].totalmark=s[i].totalmark+s[i].mark[j];
     s[i].percentage=(s[i].totalmark/500)*100;
   
   }
   printf("\nThe total mark of student is %0.2f",s[i].totalmark);
printf("\nThe percentage scored is %0.2f ",s[i].percentage);
}
}
void search(struct stud s[100],int n,int rollno){
   for (int i = 0; i < n; i++)
   {
      if (rollno==s[i].roll)
      {
      printf("\nThe name of student :%s",s[i].name);
      printf("\nThe roll:%d ",s[i].roll);
      printf("\nThe total mark of student is %0.2f",s[i].totalmark);
      printf("\nThe percentage scored is %0.2f ",s[i].percentage);
      }
    }
}
void range(struct stud s[100], int n ,int l,int h){
  for (int i = 0; i < n; i++)
  {if (s[i].percentage>=l && s[i].percentage<=h)
  {printf("\nThe name of student :%s",s[i].name);
      printf("\nThe roll:%d ",s[i].roll);
      printf("\nThe total mark of student is %0.2f",s[i].totalmark);
      printf("\nThe percentage scored is %0.2f ",s[i].percentage);
    }
  }
}
void sortByMarks(struct stud stu[], int n){
    int i,j;
  
        for(j=0;j<n;j++){
            if(stu[j].totalmark>stu[j+1].totalmark){
            struct stud temp=stu[j];
            stu[j]=stu[j+1];
            stu[j+1]=temp;
        }} for(i=0;i<n;i++){
            printf("\n\nName of Student %d: %s",i+1,stu[i].name);
            printf("\nRoll of Student %d: %d",i+1,stu[i].roll);
            printf("\nTotal Marks of Student %d: %0.2f",i+1,stu[i].totalmark);
            printf("\nPercentage of Student %d: %0.2f",i+1,stu[i].percentage);
        }

    
}
int main()
{
struct stud s[100];
int n ;int rollno,l,h;
printf("Enter the number of students in class: ");
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
   printf("Enter the name of student%d :",i+1);
   scanf("%s",&s[i].name);
   printf("Enter the roll: ");
   scanf("%d",&s[i].roll);
   for (int j = 0; j < 5; j++)
   {
    printf("Enter the mark of sub%d :",j+1);
    scanf("%f",&s[i].mark[j]);
   }
  }
   disp(s,n);
    printf("\nEnter Desired roll for Details: ");
    scanf("%d",&rollno);
   search(s,n,rollno);

   printf("\nEnter the lower range:");
   scanf("%d",&l);
   printf("\nEnter the higher range:");
   scanf("%d",&h);
   range(s,n,l,h);
   printf("\n The sorted array:\n");
   sortByMarks(s,n);
return 0;
}