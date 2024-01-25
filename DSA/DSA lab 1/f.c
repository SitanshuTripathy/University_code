#include<stdio.h>
void disp(int b[20],int n,int small,int large){
       small=b[0];
large=b[0];
for  (int i = 1; i < n; i++)
{
    if(b[i]<small){
        small=b[i];
    }
    if (b[i]>large)
    {
        large=b[i];
    }
    
}
printf("\nthe array is:");
for ( int i = 0; i < n; i++)
{
    printf(" %d",b[i]);
}

printf("\nthe smallest is: %d",small);
printf("\nthe largest is: %d",large);
}
int main(){
int i,n,a[20],small ,large;
printf("\nEnter the no .of element:");
scanf("%d",&n);
 printf("Enter the elemnts :");
for ( i = 0; i < n; i++)
{
   
    scanf("%d",&a[i]);  
}

disp(a,n,small,large);
return 0;
}