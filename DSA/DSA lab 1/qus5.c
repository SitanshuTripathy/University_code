#include<stdio.h>

int main(){
int i,n,a[20],l,h ,x=0,y=2;
printf("Enter the number of elements in array :");
scanf("%d",&n);

for ( i = 0; i < n; i++)
{
    printf("\nEnter the elemnts %d:",i);
    scanf("%d",&a[i]);  
}

printf("\nThe low value:");
scanf("%d",&l);
printf("\nThe high value:");
scanf("%d",&h);

for ( i = 0; i < n; i++)
{
    if (a[i]==l||a[i]==h)
    {
        x++;
        y=0;
    }
    if (a[i]>l&&a[i]<h)
    {
      x++;
    }
    
}
printf("the number of elemnets are: %d",x+y);
return 0;
}