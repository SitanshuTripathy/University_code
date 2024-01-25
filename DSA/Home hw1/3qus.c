// WAP in C to find maximum among 2 numbers using function.
#include<stdio.h>

void compare(int n,int m){
    if (n>m)
    {
        printf("The value of a is greater ");
    }
    else
    {printf("The value of b is greater");}
}
int main(){
int a,b;
printf("Enter a=");
scanf("%d",&a);
printf("Enter b=");
scanf("%d",&b);
compare(a,b);
return 0;
}