#include<stdio.h>
#include<stdlib.h>

int main(){
int n;
scanf("%d",&n);
int a[n];
printf("Enter array ");
for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}

int count,num;
printf("\nEnter num = ");
scanf("%d",&num);

for (int i = 0; i < n; i++) 
{
    if (a[i]==num)
    {
        count++;
    }
    
}
printf(" \n Count = %d ",count);

int maxcount=0,maxnum;
for (int i = 0; i < n; i++)
{ 
    count=0;
    for (int j = 0;j < n; j++)
    {
        if(a[i]==a[j]){
         count++;
        }
    }
    if (count>maxcount)
{
    maxcount=count;
    maxnum=a[i];
}
}
printf("\nMax occr = %d",maxnum);

return 0;
}