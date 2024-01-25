#include<stdio.h>
int sum(int n);
int main(){
int n ,res;
scanf("%d",&n);
printf("the sum is=\n");

res=sum(n);
printf("%d\n",res);

return 0;
}
int sum(int n){
    if(n==0){
        return 0;
    }
    else
    return (n+sum(n-1));
}