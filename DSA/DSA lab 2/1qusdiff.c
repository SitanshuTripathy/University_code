#include<stdio.h>

int main(){
int n,a[20],i,j,t,left=0,right;
int steps=0;
printf("Enetr the no of elements in the array:");
scanf("%d",&n);
right=n-1;
printf("\nEnter the elements of the array:");
for ( i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
for ( i = 0; i <n; i++)
{
      while(a[left]%2==0)
   {
    left++;
   }
   while(a[right]%2==1)
   {
    right--;
   }
 
   if(left<right)
   {
     t=a[left];
    a[left]=a[right];
    a[right]=t;
   }
   
   steps++;
}
printf("\nThe arranged array:");
for ( i = 0; i < n; i++)
{
    printf(" %d",a[i]);
}

printf("\nsteps= %d",steps);

return 0;
}


