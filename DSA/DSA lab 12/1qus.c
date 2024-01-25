#include<stdio.h>

int linear_search(int *,int,int);
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
    printf("\n");
    
    printf("Display the array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
    int key;
    printf("Enter the number u want to search:");
    scanf("%d",&key);
    
    int pos;
    pos=linear_search(arr,n,key);
    
    if(pos==-1)
    {
        printf("%d Element is not found in the array\n",key);
    }
    else
    {
        printf("%d element is found in the array at position %d.\n",key,pos+1);
    }
}

int linear_search(int *ptr,int n,int find)
{
    int c;
    for(c=0;c<n;c++)
    {
        if(*(ptr+c)==find)
            return c;
        
    }    return -1;
}