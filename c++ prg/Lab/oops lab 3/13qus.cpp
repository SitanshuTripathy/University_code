
#include <stdio.h>
using namespace std;
int main()
{
    int arr[20],n,i;
    int temp;
     
    printf("Enter total number of elements: ");
    scanf("%d",&n);
     
    //value of n must be even
    if(n%2 !=0)
    {
        printf("Total number of elements should be EVEN.");
        
    }
    //read array elements
    printf("Enter array elements:\n");
    for(i=0;i < n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    //swap adjacent elements
    for(i=0;i < n;i+=2)
    {
        temp    = arr[i];
        arr[i]  = arr[i+1];
        arr[i+1]= temp;
    }
     
    printf("\nArray elements after swapping adjacent elements:\n");
    for(i=0;i < n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
