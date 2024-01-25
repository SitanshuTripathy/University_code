#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int partition(int *a, int min, int max)
{
    int pivot = a[min], d = min, u = max;
    while(1)
    {
        while(a[d] <= pivot && d < max)
        d++;
        while(a[u] > pivot)
        u--; 
        if(d < u)
        {
            int temp = a[d];
            a[d] = a[u];
            a[u] = temp;
        }
        else
        break;
    }
    int temp = a[u];
    a[u] = a[min];
    a[min] = temp;
    return u;
}
void quick_sort(int *a, int min, int max)
{
    if(min < max)
    {
        int pos = partition(a, min, max);
        quick_sort(a, min, pos-1);
        quick_sort(a, pos+1, max);
    }
}
void reverse(int *a,int n)
{
    int temp,j;
    for(int i = 1; i < n; i++)
    {
        temp = a[i];
        for(j = i-1; j >= 0; j--)
        {
            if(a[j]<temp)
            a[j+1] = a[j];
            else
            break;
        }
        a[j+1] = temp;
    }
}
int main()
{
    printf("Enter size of array : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    arr[i]=rand();
    clock_t start_t, end_t;
    double total_t;
    start_t = clock();
    quick_sort(arr,0,n-1);
    // for(int i=0;i<n;i++)
    // printf("%d\t",arr[i]);
    end_t = clock();
    total_t = (double)(end_t-start_t);
    printf("Time taken to sort random integer array: %f",total_t/CLOCKS_PER_SEC);
    start_t = clock();
    quick_sort(arr,0,n-1);
    end_t = clock();
    total_t = (double)(end_t-start_t);
    printf("\nTime taken to sort sorted array: %f",total_t/CLOCKS_PER_SEC);
    reverse(arr,n);
    start_t = clock();
    quick_sort(arr,0,n-1);
    end_t = clock();
    total_t = (double)(end_t-start_t);
    printf("\nTime taken to sort reverse array: %f",total_t/CLOCKS_PER_SEC);
}