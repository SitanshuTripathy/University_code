#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main(){
int arr[50];
int n,i,j,key;
printf("\nEnter the size =");
scanf("%d",&n);
printf("\nEnter the array =");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
  for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (key == arr[j])
            {
                printf("Element which repeats first %d", key);
                break;
            }
        }
    }

return 0;
}