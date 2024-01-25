#include<stdio.h>
#include<stdlib.h>
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
void insertion_sort(int arr[], int size)
{
for (int step = 1; step < size; step++)
{
int key = arr[step];
int j = step - 1;
while (key < arr[j] && j >= 0)
{

arr[j + 1] = arr[j];
--j;
}

arr[j + 1] = key;
}
}


void bs(int a[]){//min O(n) max O(n^2), adaptive(we made it using flag),stable
int temp;
  for (int i = 0; i <8 ; i++)
    {
        for (int j = 0; j < (8 - i - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

}
void selection_sort(int a[])
{
    int i, j, min, temp;
    for (i=0; i<8; i++)
    {
        min = i;
        for (j=i+1; j<8; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void heapify(int arr[],int n,int i)
{
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    
    if(left < n && arr[left]>arr[largest])
        largest=left;
    if(right < n && arr[right]>arr[largest])
        largest=right;
    
    if(largest != i)
    {
        swap(&arr[i],&arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapsort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
        heapify(arr,n,i);
    
    for(int i=n-1;i>=0;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}

  

int main(){
int arr[8]={2,9,3,5,1,4,6,7};
int ch;
printf("\n0.EXIT");
printf("\n1.Quick sort");
printf("\n2.Heap sort");
printf("\n3.Bubble sort");
printf("\n4.Selection sort");
printf("\n5.Insertion sort");
while (1)
  {
    printf("\nEnter your choice :");
    scanf("%d", &ch);
    switch (ch)
    {
    case 0:
      exit(0);
      break;
    case 1:
      qs(arr,0,7);
       printf("\nThe elements are =");
    for (int i = 0; i < 8; i++)
    {
        printf("  %d",arr[i]);
    }
      break;
    case 2:
   heapsort(arr,8);
     for (int i = 0; i < 8; i++)
    {
        printf("  %d",arr[i]);
    }
      break;
  case 3:
  bs(arr);
    for (int i = 0; i < 8; i++)
    {
        printf(" %d", arr[i]);
    }break;
  case 4:
  selection_sort(arr);
  for (int i = 0; i < 8; i++)
    {
        printf("  %d",arr[i]);
    }
  break;
  case 5:
  insertion_sort(arr,8);
   for (int i = 0; i < 8; i++)
    {
        printf("  %d",arr[i]);
    }break;
   default:
      printf("\nInvalid input");
      break;
    }
  }
return 0;
}