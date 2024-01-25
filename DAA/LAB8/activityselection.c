#include<stdio.h>
#include<stdlib.h>
typedef struct activity
{
    int start,finish; 
}act;
void select_activity(act arr[],int n)
{
    int i=0,j;
    printf("Selected activities: \n");
    printf("A[%d]\n",i+1);
    for(int j=1;i<n-1;j++)
    {
        if(arr[j].start>=arr[i].finish)
        {
        printf("A[%d]\n",j+1);
        i=j;
        }
    }
}
int main()
{
    act a[] ={{1,3},{3,4},{2,5},{4,7},{8,9},{7,10},{9,11},{11,12},{9,13},{12,14}};
    int n=sizeof(a)/sizeof(*a);
    select_activity(a,n);
}