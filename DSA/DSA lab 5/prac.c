#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void insert(struct Node **headref,int num){
struct Node *newnode=(struct Node * )malloc(sizeof(struct Node));
newnode->data=num;
newnode->next= *headref;
*headref=newnode;
}
void traverse(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main(){
int a[]={1,2,3,4};
struct Node *head=NULL;
for (int  i = 3; i >=0; i--)
{
    insert(&head,a[i]);
}
traverse(head);
return 0;
}