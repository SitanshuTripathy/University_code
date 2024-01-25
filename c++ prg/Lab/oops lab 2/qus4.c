#include<stdio.h>
struct person
{
    int age;
    float wg;
};

int main(){
struct person *ptr,p[20];
int n;
printf("Enter no of prsn:");
scanf("%d",&n);
ptr=&p[0];
for(int i=0;i<n;i++){
    printf("\nEnter the age of person%d :",i+1);
    scanf("%d",&ptr[i].age);
    printf("\nEnter the wgt :");
    scanf("%f",&ptr[i].wg);
}
for(int i=0;i<n;i++){
    printf("\nthe age of person%d :%d",i+1,(ptr+i)->age);
   
    printf("\n the wght : %0.2f",(ptr+i)->wg);
    
}
return 0;
}