#include<stdio.h>

int main(){
int i,n,a[20],l,h ,x=0;
printf("Enter the number of elements in array :");
scanf("%d",&n);
 printf("\nEnter the elemnts :");
for ( i = 0; i < n; i++)
{
      scanf("%d",&a[i]);  
}
printf("\nThe low value:");
scanf("%d",&l);
printf("\nThe high value:");
scanf("%d",&h);
for ( i = 0; i < n; i++)
{
   if (a[i]>l&&a[i<h])
    {
      x++;
    }
}
printf("the number of elemnets are: %d",x);
return 0;
}