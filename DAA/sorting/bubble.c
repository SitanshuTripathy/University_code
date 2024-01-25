#include<stdio.h>
#include<stdlib.h>
void swap(int *m,int *n){
    int temp=*m;
    *m=*n;
    *n=temp;
}
void bubble(int a[],int n){
int i,j;
for ( i = 0; i < n; i++)
{
    for ( j = 0; j < n-1-i; j++)
    {
        if (a[j]>a[j+1])
        {
            swap(&a[j],&a[j+1]);
        }
        
    }
    
}

}
int main(){
int n;
scanf("%d",&n);
int a[n];
for (int i = 0; i <n; i++)
{
    a[i]=rand();
}
bubble(a,n);
for (int i = 0; i < n; i++)
{
    printf("%d ",a[i]);
}


return 0;
}