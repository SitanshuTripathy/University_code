#include<stdio.h>
int main(){
int a[50],b[50],n,n1,n2,i;

printf("Enter the coeff for array a:");
scanf("%d",&n1);
printf("Enter the coeff for array b:");
scanf("%d",&n2);
if (n1>n2)
n=n1;
else
n=n2;

printf("\nEnter the elements of array a:");
for ( i = n; i>=0; i--)
{   printf("x^%d =",i);   
    scanf("%d",&a[i]);
}

printf("\nEnter the elements of array b:");
for ( i = n; i>=0; i--)
{   printf("x^%d =",i);
    scanf("%d",&b[i]);
}
printf("\nThe Sum is : ");
int sum[50],k;
for ( k = n;k>=0;k--)
{
    sum[k]=a[k]+b[k];
}
for ( k = n;k>=0;k--)
{
    printf("%dx^%d+",sum[k],k);
}

return 0;
}