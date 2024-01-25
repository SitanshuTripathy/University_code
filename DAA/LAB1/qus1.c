#include<stdio.h>
#include<stdlib.h>
void small(int a[],int n){
    int min;
for (int  i = 0; i < n; i++)
{
     if(min>a[i])
     min=a[i];

}
printf("\nTHE smallest integer = %d ",min);
}
void large(int a[],int n){
    int max;
for (int  i = 0; i < n; i++)
{
     if(max<a[i])
     max=a[i];

}
printf("\nTHE largest integer = %d ",max);
}
int main(){
int n;
printf("Enter the size of arrary = ");
scanf("%d",&n);
int a[n];
printf("the elemnet in the array \n");
for (int  i = 0; i < n; i++)
{
    a[i]=rand();
}

for (int  i = 0; i < n; i++)
{
   printf(" %d ",a[i]);
}

small(a,n);
    large(a,n);
return 0;
}