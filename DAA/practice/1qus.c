#include<stdio.h>
#include<stdlib.h>
 
void sort(int a[],int n){
int i,j,temp;
for ( i = 0; i < n; i++)
{
    for ( j = i+1; j < n; j++)
    { 
      if (a[i]<a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }}}}


int main(){
int n,i,j;
printf("Enter n = "); scanf("%d",&n);
int a[n];
printf("Enter array = ");
for ( i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
for ( i = 0; i < n; i++)
{
    printf("%d ",a[i]);
}
sort(a,n);
printf("\n");
for ( i = 0; i < n; i++)
{
    printf("%d ",a[i]);
}

printf("\n%d ",a[1]);
printf("\n%d ",a[n-2]);
return 0;
}