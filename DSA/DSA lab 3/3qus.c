#include<stdio.h>
int main()
{ 
    int n,i ,arr[50];
    printf("Enter the size of the 1st array:");
    scanf("%d",&n);
     printf("Enter the Element of the 1st array:\n");
     for(i=0;i<n;i++)
       {
        scanf("%d",&arr[i]);
        }

 int n2,arr2[n2];
    printf("Enter the size of the 2nd array:");
     scanf("%d",&n2);
    printf("Enter the Element of the 2nd array:\n");
     for(i=0;i<n2;i++)
       {
        scanf("%d",&arr2[i]);
        }
    
    int j,count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(arr[i]==arr2[j]){
              count++;
        }}

    }
    if(count==n2)
        printf("Array two is a subset of array one.");
    else
        printf("Array two is not a subset of array one");

   return 0;     
}