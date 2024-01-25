#include<stdio.h>
#include<stdlib.h>

int main(){
int n,i,j,sum;
printf("Enter n = "); scanf("%d",&n);
int a[n];
printf("Enter array = "); 
for ( i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}

for ( i = 0; i < n; i++)
{   sum= a[i]+sum;
    printf("%d ",sum);

}
return 0;
}