#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, l;

    printf("\nEnter the size of Array      : ");
    scanf("%d", &n);

    int *a;
    a = malloc(n * sizeof(a));

    printf("\nEnter the elements of array  : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter kth largest term         : ");
    scanf("%d", &k);
    printf("Enter kth Smallest term        : ");
    scanf("%d", &l);
    printf("\nElements of array sorted in ascending order : ");
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("%d ", a[i]);
    }
    printf("\nThe [%dth] Smallest element is       : %d", l, a[l - 1]);
    printf("\n\nThe [%dth] Largest element is        : %d", k, a[n - k]);
    printf("\n");
    return 0;
}