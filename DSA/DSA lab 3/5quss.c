#include<stdio.h>

int main(){
int a[50],i,j,n,count=0;
printf("Enter the size of the array :");
scanf("%d",&n);
printf("Enter the elements of the array :");
for ( i = 0; i <n; i++)
{
scanf("%d",&a[i]);
}
for ( i = 0; i < n; i++)
{
for ( j = i+1; j < n; j++)
{
    if (a[j]>a[j-1])
    {
     count++;
    }
    else
    break;
}
}
printf("\nThe number of sub array are: %d",count);
return 0;
} 