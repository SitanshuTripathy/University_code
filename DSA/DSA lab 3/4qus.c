#include<stdio.h>

int main(){
int a[50],i,j,n,sum;
printf("Enter the size of the array :");
scanf("%d",&n);
printf("Enter the elements of the array :");
for ( i = 0; i <n; i++)
{
scanf("%d",&a[i]);
}
printf("Enter the sum :");
scanf("%d",&sum);
for(i=0;i<n;i++){
    for ( j =i+1; j < n; j++)
    {
        if (a[i]+a[j]==sum)
        {
            printf("\n(%d , %d)",a[i],a[j]);
        } }}
return 0;
}