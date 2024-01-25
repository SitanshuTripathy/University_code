#include<stdio.h>

int main(){
int i, j;    
int a[3][4]= {
              {1,2,3,4},
              {5,6,7,8},
              {1,4,6,9}
             };
int *b=&a[0][0];
for(i=0;i<12;i++)
printf("%d ",b[i]);
printf("\nthe reverse:");
for(j=11;j>=0;j--)
printf("%d ",b[j]);          
return 0;
}