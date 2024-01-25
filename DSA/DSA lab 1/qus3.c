#include<stdio.h>

int main(){
int a[100],n,i,m,p=0;

printf("Enter the size of array: ");
scanf("%d",&n);
  printf("\nEnter the elemnts :");
for ( i = 0; i < n; i++)
{
  
    scanf("%d",&a[i]);  
}

printf("\nEnter the elemnt to search:");
scanf("%d",&m);

for ( i = 0; i < n; i++){
    if (a[i]==m)
    {
        p=1;
        break;
    }
    }
if (p==1)
{
    printf(" It is found at array postn %d",i);
    }

return 0;
}