#include<stdio.h>
int sum (int a,int b,int c);
int main(){
int num1,num2,num3,avg;
printf("\nenter the 1st number:");
scanf("%d",&num1);
printf("\nenter the 2nd number:");
scanf("%d",&num2);
printf("\nenter the 3rd number:");
scanf("%d",&num3);
avg = sum(num1,num2,num3)/2;
printf("\n the avg is:%d",avg);
return 0;

}
int sum (int a,int b,int c){
    int result;
result = a + b + c;
return result;

}
