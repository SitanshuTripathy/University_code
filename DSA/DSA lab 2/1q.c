#include<stdio.h>

int main(){
int n,a[20],i,j,t,left=0,right;
printf("Enetr the no of elements in the array:");
scanf("%d",&n);

printf("\nEnter the elements of the array:");
for ( i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}

for ( i = 0; i < n; i++)
{
    if (a[i]%2==0)
    {
       printf(" %d",a[i]);
    }

}  
    
for ( i = 0; i < n; i++){
      if (a[i]%2!=0)
    {
        printf(" %d",a[i]);
    }
}


return 0;
}