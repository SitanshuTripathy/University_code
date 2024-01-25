#include<stdio.h>
#include<stdlib.h>
void swap(int *n,int *m){
    int temp=*n;
    *n=*m;
    *m=temp;
}
void rotate_right(int *a,int pos){
for (int i =pos-1; i >0 ;i--)
{
    swap(&a[i],&a[i-1]);
}
}

int main(){
int n;
scanf("%d",&n);
int a[n];
printf("Enter array ");
for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}

rotate_right(a,5);
for (int i = 0; i < n; i++)
{
    printf("%d ",a[i]);
}


return 0;
}