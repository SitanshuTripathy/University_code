#include<stdio.h>
#include<stdlib.h>
#include <time.h>
void insertion_sort(int arr[], int n)
{
for (int i = 1; i < n; i++)
{
int key = arr[i];
int j = i - 1;
while (key < arr[j] && j >= 0)
{ 

arr[j + 1] = arr[j];
--j;
}

arr[j + 1] = key;
}
}
int binary_search(int arr[],int n,int key)
{
    int f=0;    
    int r=n;
    int mid;
    
    while(f<=r)
    {
        mid=(f+r)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            f=mid+1;
            return mid+1;
        }
        else
        {
            r=mid-1;
            return mid -1;
        }
    }
    if(f>r)
    {        
    return -1;
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
insertion_sort(a,n);
clock_t start_t,end_t;
double total_t;
start_t=clock();
binary_search(a,n,a[0]);
end_t=clock();
total_t=(double)(end_t-start_t);
printf("The 1st element time = %f microsec",total_t/CLOCKS_PER_SEC);

start_t=clock();
binary_search(a,n,a[n/2]);
end_t=clock();
total_t=(double)(end_t-start_t);
printf("\nThe mid element = %f microsec",total_t/CLOCKS_PER_SEC);

;
start_t=clock();
binary_search(a,n,a[n-1]);
end_t=clock();
total_t=(double)(end_t-start_t);
printf("\nThe last element = %f microsec",total_t/CLOCKS_PER_SEC);
return 0;
}