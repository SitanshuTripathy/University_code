#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node *next;
};
int main(void)
{
    int size, n;
    printf("Enter the number of nodes: ");
    scanf("%d",&size);
    struct node *list = (struct node *)malloc(sizeof(struct node));
    struct node *copy = list;
    printf("Enter the value: \n");
    for (int i = 0; i < size; i++)
    {
        struct node *current = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &current->val);
        current->next = NULL;
        list->next = current;
        list = list->next;
    }
    copy = copy->next;
    list = copy;
    printf("Enter the key to search and insert: ");
    scanf("%d", &n);
    while (list->next)
    {
        if (list->next->val == n)
        {
            struct node *triple = list->next;
            list->next = list->next->next;
            triple->next = copy;
            list = triple;
            break;
        }
        list = list->next;
    }
    copy = list;
    while (copy)
    {
        printf(" %d", copy->val);
        copy = copy->next;
    }
    return 0;
}