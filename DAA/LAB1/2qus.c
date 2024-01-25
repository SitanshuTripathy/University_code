#include<stdio.h>
#include<stdlib.h>

int main(){
int n;
printf("Enter the size of arrary = ");
scanf("%d",&n);
int a[n];
int seed;
scanf("%d",&seed);
srand(seed);
printf("the elemnet in the array \n");
for (int  i = 0; i < n; i++)
{
    a[i]=rand()%6;
    if (i%5==0)
    {
        puts("");
    }
    
}
for (int  i = 0; i < n; i++)
{
   printf(" %d ",a[i]);
}
int count=0;
for (int i = 0; i < n; i++) 
{
   for (int j= i+1; j < n; j++)
   {
     if(a[i]==a[j]){
     count++;
     break;
   }
   }
}
printf("\n The count = %d ",count);
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