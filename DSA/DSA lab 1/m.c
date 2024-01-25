#include <stdio.h>

int main()
{
    int n, i, l, m;
    int a[50];
    printf("Enter size of array\n");
    scanf("%d", &n);

    printf("Enter array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the lower and upper limit\n");
    scanf("%d %d", &l, &m);

    int count = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] >= l && a[i] <= m)
            count += 1;
    }

    printf("Number of elements between %d and %d is %d\n", l, m, count);
}