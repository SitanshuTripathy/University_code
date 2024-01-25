#include<stdio.h>
#include<stdlib.h>

int swap(int n, int m){
int temp=n;
n=m;
m=temp;
printf("n= %d , m=%d",n,m);
return 0;
}

int main(){
int n,m;
printf("Enter the two number = ");
scanf("%d %d",&n,&m);
swap(n,m);
return 0;
}