#include<stdio.h>

int main(){
int a[ ]={1.2, 2.4, 3.6, 4.8, 5.7};
int j, *p = a;
for(j = 0;j<5;j++)

{
printf("%d ", *p++);
p=a;
}
return 0;
}