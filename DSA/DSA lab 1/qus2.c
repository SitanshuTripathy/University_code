#include<stdio.h>

int main(){
int a[20],r[20],n,i;
printf("Enter the number of elements in array :");
scanf("%d",&n);
printf("\nEnter the elemnts:");
for ( i = 0; i < n; i++)
{
    scanf("%d",&a[i]);  
}

/*for ( i = 0; i < n; i++)
{
    r[i]=a[n-i-1];
}

printf("\nThe reverse: ");
for ( i = 0; i < n; i++)
{
    printf(" %d",r[i]);
}*/
printf("\nThe reverse: ");
for ( i = n-1; i >=0; i--)
{
    printf(" %d",a[i]);
}
return 0;
}