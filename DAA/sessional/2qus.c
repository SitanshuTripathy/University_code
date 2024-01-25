#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int count=0;
void merge(int *a, int min, int mid, int max)
{
    int i = min, j = mid+1 ,k=0, b[max-min+1];
    while(i <= mid && j <= max)
    {
        if(a[i] < a[j]){
        b[k++] = a[i++];
        count++;}
        else{
        b[k++] = a[j++];
        count++;}  
    }
    while(i <= mid)
    b[k++] = a[i++];
    while(j <= max)
    b[k++] = a[j++];


    for(int m = 0 ; m < k; m++)
    a[min + m] = b[m];

}

 void merge_sort(int *a, int min, int max)
{
    if(min < max)
    {
        int mid = (min + max) /2;
        merge_sort(a, min, mid);
        merge_sort(a, mid+1, max);
        merge(a, min, mid, max);
    }
}

int main(){
int n;
printf("Enter the n = ");
scanf("%d",&n);
int a[n];
for (int i = 0; i < n; i++)
{
    a[i]=rand();
}

merge_sort(a,0,n-1);

for (int i = 0; i < n; i++)
{
  printf("%d ",a[i]);
}
printf(" inv = %d",count);

return 0;
}