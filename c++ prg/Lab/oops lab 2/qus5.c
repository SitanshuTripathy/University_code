#include<stdio.h>
#include<stdlib.h>

struct person
{
    int age;
    float wg;
};

int main(){
struct person *ptr;
int n;
printf("Enter no of prsn:");
scanf("%d",&n);
ptr=(struct person*)malloc(n*sizeof(struct person));//dynamic memory allocation
for(int i=0;i<n;i++){
    printf("\nEnter the age of person%d :",i+1);
    scanf("%d",&ptr[i].age);
    printf("\nEnter the wgt :");
    scanf("%f",&ptr[i].wg);
}
for(int i=0;i<n;i++){
    printf("\nthe age of person%d :%d",i+1,(ptr+i)->age);
   
    printf("\n the wght : %0.2f kg",(ptr+i)->wg);
    
}
free(ptr);
return 0;
}