#include<stdio.h>

int main(){
int i,n,a[20],e;
printf("Enter the number of elements in array :");
scanf("%d",&n);
 printf("\nEnter the elemnts :");
for ( i = 0; i < n; i++)
{
   
    scanf("%d",&a[i]);  
}

for ( i = 0; i < n; i++)
{
for (int j =i+1 ; j < n; j++)
{
    if (a[i]>a[j])
    {
      e=a[i];
      a[i]=a[j];
      a[j]=e;
    }
}
}

printf("\nThe sorted order is :");
for ( i = 0; i < n; i++)
{
    printf(" %d",a[i]);
}

return 0;
}