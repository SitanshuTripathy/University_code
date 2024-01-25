#include<stdio.h>
int main(){
int a[50],b[50],n,n1,n2,i,j;

printf("Enter the coeff for array a:");
scanf("%d",&n1);
printf("Enter the coeff for array b:");
scanf("%d",&n2);

printf("\nEnter the elements of array a:");
for ( i =n1; i>=0; i--)
{   printf("x^%d =",i);   
    scanf("%d",&a[i]);
}

printf("\nEnter the elements of array b:");
for ( i =n2; i>=0; i--)
{   printf("x^%d =",i);
    scanf("%d",&b[i]);
}
int prd[n1+n2];
for ( i = 0; i < n1+n2; i++)
{
    prd[i]=0;}
for ( i = 0; i < n1; i++)
{for ( j = 0; j < n2; j++)
{
    prd[i+j]=prd[i+j]+a[i]*b[j];
}
}
for ( i =n1+n2-1; i>=0; i--)
{
    printf("%dx^%d+",prd[i],i);
}
return 0;
}