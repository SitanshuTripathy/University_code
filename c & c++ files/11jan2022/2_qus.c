#include<stdio.h>
void f1(int x ,int y,int *z);
int main(){
int a ,b,c;
printf("\nEnter the number :");
scanf("%d %d",&a,&b);
f1(a,b,&c);
return 0;
}
void f1(int x ,int y,int *z){
    int max,min;
    min=(x<y)?x:y;
    max=(x>y)?x:y;
    *z=(x+y)/2;
    printf("\nthe min is %d",min);  
    printf("\nthe max is %d",max);
    printf("\n the avg is %d",*z);
}