#include<stdio.h>
#include<stdlib.h>
void swap(int *n,int *m){
int temp=*n;
*n=*m;
*m=temp;
}
void bubble(int a[],int n ){
    int flag=0;
for (int i = 0; i <n; i++)
{
    for (int j = 0; j < n-1-i; j++)
    { flag=0;
        if(a[j]>a[j+1]){
        swap(&a[j],&a[j+1]);
        flag=1;
    }
    if (flag==0)
    {
        break; 
    }
    
    }
}


}
int main(){
int a[]={3,2,1,4,5,9,7};

bubble(a,7);
for (int i = 0; i < 7; i++)
{
    printf("%d ",a[i]);
}

return 0;
}