#include<stdio.h>

int main(){
int n,a[20],i,j,t;
printf("Enetr the no of elements in the array:");
scanf("%d",&n);
printf("\nEnter the elements of the array:");
for ( i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
j=n;
for ( i = 0; i <= j; i++)
{
   if (a[i]%2!=0)
   {
    while(j>i)
    {j--;
      
                if(a[j] % 2 == 0)  
                {  
                    t = a[i];  
                    a[i] = a[j];  
                    a[j] = t;  
                    break;  
                }  

    }
   }
   
}
printf("\nthe array is :");
for(i=0;i<n;i++)
printf(" %d",a[i]);

return 0;
}
