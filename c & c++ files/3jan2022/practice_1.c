#include<stdio.h>

int main(){
int i=6487568;
int *j;
j=&i;
printf("the value of i:%d",i);
printf("\nthe value of i:%d",*j);
printf("\nthe address of i:%u",j);
printf("\nthe address of j:%d",&j);
printf(" \nthe size of i:%d", sizeof(i));
printf("\nthe size of j:%d", sizeof(j));
return 0;
}