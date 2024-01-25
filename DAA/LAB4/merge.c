#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void merge(int *a, int min, int mid, int max)
{
    int i = min, j = mid+1 ,k=0, b[max-min+1];
    while(i <= mid && j <= max)
    {
        if(a[i] < a[j])
        b[k++] = a[i++];
        else
        b[k++] = a[j++];  
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
void revbs(int a[],int n){
int temp;
  for (int i = 0; i <n ; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
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
clock_t start_t,end_t;
double total_t;
start_t=clock();
merge_sort(a,0,n-1);
end_t=clock();
total_t=(double)(end_t-start_t);
printf("The total time = %f ",total_t/CLOCKS_PER_SEC);

start_t=clock();
merge_sort(a,0,n-1);
end_t=clock();
total_t=(double)(end_t-start_t);
printf("\nThe total time for sorted = %f ",total_t/CLOCKS_PER_SEC);

revbs(a,n);
start_t=clock();
merge_sort(a,0,n-1);
end_t=clock();
total_t=(double)(end_t-start_t);
printf("\nThe total time for  reverse sorted = %f ",total_t/CLOCKS_PER_SEC);
return 0;
}