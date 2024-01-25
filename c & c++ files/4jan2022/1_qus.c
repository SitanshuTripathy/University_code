#include<stdio.h>

int main() 
{
int i;
int a[5]={9,5,6,7,2};
int *b=a;
for( i=0;i<5;i++){
    printf("%d ",b[i]);
}
return 0;
}