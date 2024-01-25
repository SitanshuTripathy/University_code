// Write a menu driven program to input a number and display your choice.
#include<stdio.h>
#include<string.h>

int main(){
    int n;
    printf("Enter the optn:");
    scanf("%d",&n);

switch (n)
{
case 1:printf("ONE");
    break;
case 2:printf("TWO");
    break;


default:
    break;
}
return 0;
}