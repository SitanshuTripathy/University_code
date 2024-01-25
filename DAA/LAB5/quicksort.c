#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void qs(int a[],int left,int right){
    int i=left;
    int j=right;
    int temp=a[i];
    if (left<right){
        while (i<j){
            while (a[j]>=temp&& i<j){
            j--;
            }
            a[i]=a[j];
            while (a[i]<=temp&&i<j){
                i++;
            }
            a[j]=a[i];
        }
    a[j]=temp; qs(a,j+1,right);
    qs(a,left,i-1);
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
qs(a,0,n-1);
end_t=clock();
total_t=(double)(end_t-start_t);
printf("The total time = %f microsec",total_t/CLOCKS_PER_SEC);
 
start_t=clock();
qs(a,0,n-1);
end_t=clock();
total_t=(double)(end_t-start_t);
printf("\nThe total time for sorted = %f microsec",total_t/CLOCKS_PER_SEC);

revbs(a,n);
start_t=clock();
qs(a,0,n-1);
end_t=clock();
total_t=(double)(end_t-start_t);
printf("\nThe total time for  reverse sorted = %f microsec",total_t/CLOCKS_PER_SEC);
return 0;
}