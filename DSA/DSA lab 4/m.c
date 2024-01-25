#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *root;
void display()
{
    struct node *temp;
    temp=root;
    if(root==NULL)
    {
        printf("The list is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->link;
        }
    }
}
void addatbegin()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data of the node");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        printf("The list is empty");
    }
    else
    {
        temp->link=root;
        root=temp;
    }
}
void addatend()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter the data of the node");
    scanf("%d",temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node *p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}
void length()
{
    int count=0;
    struct node *temp;
    temp=root;
    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    printf("the length of the list is %d ",count);
}
int main()
{
    int ch;
    printf("1.Traversal of the list\n");
    printf("2.Insert a node at the beginning\n");
    printf("3.Insert a node at the end\n");
    printf("4.Count the total no.of nodes\n");
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : display();
                break;
        case 2 : addatbegin();
                break;
        case 3 : addatend();
                break;
        case 4 : length();
                break;
        default : printf("Invalid input");                
    }
    return 0;
}