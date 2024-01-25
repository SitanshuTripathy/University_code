#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void tarverse(struct Node *ptr)
{

    printf("List items\n");
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}
void count(struct  Node *ptr,int search){
    int count = 0;
    while (ptr!=NULL)
    {
        if (ptr->data == search)
        {
            count++;
        }
        ptr = ptr->next;
    }
    printf("%d occurred %d times",search,count);
}
int main()
{
    int size, i,key;
    printf("Enter the number of nodes you want: ");

    scanf("%d", &size);

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter the data: ");
    scanf("%d", &head->data);
    head->next = NULL;
    struct Node *point = (struct Node *)malloc(sizeof(struct Node));
    point = head;
    for (i = 1; i < size; i++)
    {
        struct Node *node = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &(node->data));
        node->next = NULL;
        point->next = node;
        point = point->next;
    }

    tarverse(head);
    printf("Enter the key: ");
    scanf("%d",&key);
    count(head,key);
    
    return 0;
}