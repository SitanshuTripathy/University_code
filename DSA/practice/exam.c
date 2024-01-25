#include<stdio.h>
#include<math.h>

int main(){
int n,i,j,index=0,elemnt;
printf("\nEnter the size of the array = ");
scanf("%d",&n);
int arr[n];
printf("\nEnter the elements = ");
scanf("%d",&arr[n]);
for ( i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
for ( i = 0; i < n; i++)
{elemnt=arr[i];
    for ( j = i+1; j <n; i++)
    {
        if (elemnt==arr[j])
        {
          printf("\n%d",elemnt);
           break;
        }
        
    }
    
}

return 0;
}