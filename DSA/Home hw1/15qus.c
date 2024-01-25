#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int ch, pos, c, n, arr2[100];
    int arr[100],  i, j, num, Value;
    int key, a, count = 0;
    printf("\nPlease Enter num of elements in an arr\n");
    scanf("%d", &num);

    printf("\nPlease Enter %d elements of an arr \n", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
        printf("\nenter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:

            printf("\nPlease Enter the location of a Element you want to insert\n");
            scanf("%d", &pos);

            printf("\nPlease Enter the value of an arr Element to insert\n");
            scanf("%d", &Value);

            for (i = num - 1; i >= pos - 1; i--)
            {
                arr[i + 1] = arr[i];
            }
            arr[pos - 1] = Value;

            printf("\n Final arr after Inserting an  Element is:\n");
            for (i = 0; i <= num; i++)
            {
                printf("%d\t", arr[i]);
            }
            break;

        case 2:

            printf("Enter the location where you wish to delete element\n");
            scanf("%d", &pos);

            if (pos >= n + 1)
                printf("Deletion not possible.\n");

            else
            {
                for (c = pos - 1; c < n - 1; c++)
                    arr[c] = arr[c + 1];

                printf("Resultant arr is\n");

                for (c = 0; c < n - 1; c++)
                    printf("%d ", arr[c]);
            }
            break;

        case 3:
            printf("Array printing in reverse order is:\n");
            for (i = num - 1; i >= 0; i--)
            {
                printf("%d\n", arr[i]);
            }
            break;

        case 4:

            printf("Enter the key : ");
            scanf("%d", &key);

            for (i = 0; i < num; i++)
            {
                if (arr[i] == key)
                {
                    printf("element found ");
                    return 0;
                }
            }

            printf("element  not  found");
            break;
        case 5:
            for (i = 0; i < num; ++i)
            {
                for (j = i + 1; j < num; ++j)
                {
                    if (arr[i] > arr[j])
                    {
                        a = arr[i];
                        arr[i] = arr[j];
                        arr[j] = a;
                    }
                }
            }
            printf("The nums in ascending order are:");
            for (i = 0; i < num; ++i)
            {
                printf("%d ", arr[i]);
           }
             printf("The nums in decending order are:");
            for (i = num-1; i>=0; i--)
            {
                printf("%d ", arr[i]);
            }
           
            break;

        case 6:
            printf("displaying all elements");
            for (i = 0; i < num; i++)
            {
                printf("%d ", arr[i]);
            }
            break;

        case 7:
            for ( i = 0; i < num; i++)
            {
                for ( j = 2; j < arr[i]; j++)
                {
                    if (arr[i] % j == 0)
                    {
                        printf("%d ", arr[i]);
                        break;
                    }
                }
            }
        }

   
    return 0;
}