// 3rd change and decrease 1st two place by 2
#include<stdio.h>

int main(){
 int a[5]={1,2,3,4,5};
    int *p,i;
    p=&a[2];
    *p=7;
    *(p-1)= *p-2;
    *(p-2)= *p-4;
    
    printf("\n  New array is :");
    for(i=0;i<5;i++)
    printf("%d ",*(a+i));

return 0;
}