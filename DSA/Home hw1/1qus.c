// WAP in C to using function input 10 numbers in an array and display it.
#include<stdio.h>
void input(int a[10]){
printf("Enter 10 number :");
for (int i = 0; i < 10; i++)
{scanf("%d",&a[i]);
}
}
void output(int a[10]){
printf("\nThe number are:");
for (int i = 0; i < 10; i++)
{printf(" %d",a[i]);
}
}
int main(){
int a[10];
input(a);
output(a);
return 0;
}