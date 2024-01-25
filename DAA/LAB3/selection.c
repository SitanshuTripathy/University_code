#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void selection_sort(int a[],int n)
{
    int i, j, min, temp; 
    for (i=0; i<n ;i++)
    {
        min = i;
        for (j=i+1; j<n; j++) 
        {
            if (a[j] < a[min]) 
                min = j;
        }
        temp = a[i]; 
        a[i] = a[min];
        a[min] = temp; 
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
printf("Enter the size = ");
scanf("%d",&n);
int a[n];
for (int i = 0; i < n; i++)
{
    a[i]=rand();
}
clock_t start_t,end_t;
double total_t;
start_t=clock();
selection_sort(a,n);
end_t=clock();
total_t=(double)(end_t-start_t);
printf("The total time = %f microsec",total_t/CLOCKS_PER_SEC);

start_t=clock();
selection_sort(a,n);
end_t=clock();
total_t=(double)(end_t-start_t);
printf("\nThe total time for sorted = %f microsec",total_t/CLOCKS_PER_SEC);

revbs(a,n);
start_t=clock();
selection_sort(a,n);
end_t=clock();
total_t=(double)(end_t-start_t);
printf("\nThe total time for  reverse sorted = %f microsec",total_t/CLOCKS_PER_SEC);
return 0;
}