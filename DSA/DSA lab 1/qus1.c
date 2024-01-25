#include<stdio.h>

int main(){
int i,n,a[20],small ,large;
printf("\nEnter the no .of element:");
scanf("%d",&n);

for ( i = 0; i < n; i++)
{
    printf("\nEnter the elemnts %d:",i);
    scanf("%d",&a[i]);  
}
small=a[0];
large=a[0];
for  (i = 1; i < n; i++)
{
    if(a[i]<small){
        small=a[i];
    }
    if (a[i]>large)
    {
        large=a[i];
    }
    
}
printf("\nthe array is:");
for ( i = 0; i < n; i++)
{
    printf(" %d",a[i]);
}

printf("\nthe smallest is: %d",small);
printf("\nthe largest is: %d",large);
return 0;
}