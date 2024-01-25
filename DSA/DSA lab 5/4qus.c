#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;  
    struct node *next; 
    struct node *prev;
};
void traverse(struct node *head,int n)
{
    printf("\nThe circular linked list: ");
    struct node *temp;
    int i;
        for (temp = head, i = 0;i < n;temp = temp->next,i++)
    {
        printf(" %d",temp->data);
    }
    printf("-->%d",temp->data);

}
int main(){
int i,n;
    printf("Enter the number of elements in the doubly linked list: ");
    scanf("%d", &n);
    struct node *head; 
    struct node *tail; 
    struct node *temp; 
    struct node *t; 
    temp = (struct node *)malloc(sizeof(struct node));
    head = temp;
    printf("Enter element1: ");
scanf("%d", &temp->data);
    for (i = 1;i < n;i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        temp->next = t;
        t->prev = temp;
        printf("Enter element%d: ", i+1);
        scanf("%d", &t->data);
        temp = t;
    }
    printf("\n");
    temp->next = head;
    tail = temp;
    head->prev = tail;
traverse(head,n);
return 0;
}