//revese order
#include<stdio.h>

int main(){
int i;
int a[5]={1,2,3,4,5};
int *b=a;
for(i=4;i>=0;i--)
printf("%d ",b[i]);
return 0;
}