#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void traverse(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void check(struct Node *ptr)
{
    if (ptr == NULL)
    {
        printf("The list is empty\n");
    }
    else
    {
        printf("The list is not empty\n");
    }
}
struct Node *insertAtmiddle(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct Node *deleteatIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct Node *deleteBykey(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

struct Node *count(struct Node *ptr)
{

    int count = 0;

    while (ptr != NULL)
    {

        ptr = ptr->next;

        count++;
    }

    printf("Total no. of nodes is %d", count);
}
int searchElement(struct Node* head, int item)
{
    struct Node* current = head;  
    int index = 0;
    
    while (current != NULL)
    {
        if (current->data == item){
            return index;
        }
        current = current->next;
        index++;
    }
    return -1;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data=7;
    head->next = second;
    second->data = 88;
    second->next = third;
    third->data = 77;
    third->next = fourth;
    fourth->data = 89;
    fourth->next = NULL;
    int chooose, position, keys,item;
    printf("Enter your choice: ");
    scanf("%d", &chooose);
    switch (chooose)
    {
    case 1:
        traverse(head);

        break;
    case 2:
        check(head);
        break;
    case 3:
        printf("Enter the position: \n");
        scanf("%d", &position);
        head = insertAtmiddle(head, 55, position);
        traverse(head);
        break;
    case 4:
        printf("Enter the position: \n");
        scanf("%d", &position);
        head = deleteatIndex(head, position);
        traverse(head);
        break;
    case 5:
        printf("Enter the key: \n");
        scanf("%d", &keys);
        head = deleteBykey(head, keys);
        traverse(head);
        break;
    case 6:
        count(head);break;
    case 7: printf("Enter the element: ");
            scanf("%d",&item);
        searchElement(head,item);
        break;


    default:printf("Wrong key is entered!!");
        break;
    }
  
    return 0;
}