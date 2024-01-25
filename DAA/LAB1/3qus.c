#include<stdio.h>
#include<stdlib.h>

int main(){
int n,i;
printf("Enter n = "); scanf("%d",&n);
int a[n];
int prd=1;
printf("Enter array = ");
for ( i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
     prd= prd*a[i];
}
printf("\nThe output = "); 
for ( i = 0; i < n; i++)
{
    printf("%d ",prd/a[i]);
}
return 0;
}