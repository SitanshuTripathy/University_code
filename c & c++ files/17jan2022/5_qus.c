#include<stdio.h>
int GCD(int x,int y);
int main(){
int n1,n2,res;
printf("\nEnter the two number:");
scanf("%d %d",&n1,&n2);
res= GCD(n1,n2);
printf("\n GCD of %d and %d = %d",n1,n2,res);
return 0;
}
int GCD(int x ,int y){
    int rem;
    rem = x%y;
    if(rem==0)
    return y;
    else
    return (GCD(y,rem));
}