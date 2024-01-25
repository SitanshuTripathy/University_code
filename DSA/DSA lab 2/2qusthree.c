#include<stdio.h>
int main()
{
int n,i,stp=0;
printf("\nEnter the number : ");
scanf("%d",&n);
for(i = 2; i <= n/2; i++)
{
if(n % i ==0)
{
break;
}stp++;
}
if(i > n/2){
printf("\n%d is a Prime Number\n",n);stp++;}
else{
printf("\n%d is not a Prime Number\n", n);stp++;
}
printf("\nstep=%d",stp);
return 0;
}