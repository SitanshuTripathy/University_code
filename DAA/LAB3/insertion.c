#include<stdio.h>
#include<stdlib.h>
#include<time.h>
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
insertion_sort(a,n);
end_t=clock();
total_t=(double)(end_t-start_t);
printf("The total time = %f microsec",total_t/CLOCKS_PER_SEC);

start_t=clock();
insertion_sort(a,n);
end_t=clock();
total_t=(double)(end_t-start_t);
printf("\nThe total time for sorted = %f microsec",total_t/CLOCKS_PER_SEC);

revbs(a,n);
start_t=clock();
insertion_sort(a,n);
end_t=clock();
total_t=(double)(end_t-start_t);
printf("\nThe total time for  reverse sorted = %f microsec",total_t/CLOCKS_PER_SEC);
return 0;
}