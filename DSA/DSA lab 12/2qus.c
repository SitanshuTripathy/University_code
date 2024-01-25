#include<stdio.h>

void binary_search(int[],int,int);
int main()
{
    int n;
  
    printf("Enter the size of the array:");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
      
    int key;
    printf("Enter the number u want to search:");
    scanf("%d",&key);
    
    binary_search(arr,n,key);
    return 0;
}
void binary_search(int arr[],int n,int key)
{
    int f=0;
    int r=n;
    int mid;
    
    while(f<=r)
    {
        mid=(f+r)/2;
        if(arr[mid]==key)
        {
            printf("Searched Element:%d , Found at %d position\n",key,mid+1);
            break;
        }
        else if(arr[mid]<key)
        {
            f=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    if(f>r)
    {        printf("Searched Element %d not found in the array\n",key);
    }
}

