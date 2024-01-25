#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *prev;
}*head,*tail;

void listcreate(struct node **head,struct node **tail,int n){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    *head=temp;
    temp->prev=NULL;
    printf("Enter node1 : ");
    scanf("%d", &temp->data);
    for (int i=1; i<n; i++){
    struct node*t=(struct node*)malloc(sizeof(struct node));
    temp->next=t;
    t->prev=temp;
        printf("Enter node%d : ", i+1);
        scanf("%d", &t->data);
        temp = t;
        }
temp->next=NULL;
*tail=temp;
} 
void rev_traverse(struct node *tail)
{printf("\nThe reverse is :");
  struct node *temp;
    for (temp = tail;temp->prev!= NULL;temp = temp->prev)
    {
        printf("%d-->",temp->data);
    }
    printf("%d\n",temp->data);
}
void swap(struct node **head,struct node **tail){
struct node *ptr,*t,*temp;
ptr= *head; t= *tail;
while(ptr!=NULL){
    temp=ptr->next;
    ptr->next=t->next;
    t->next=temp;
  
}

}
void display(){
    struct node*ptr=head;
    printf("\nThe elemnts are :");
     while (ptr != NULL)
    {
        printf(" %d", ptr->data);
        ptr = ptr->next;
    }
    }
int main(){
int n;
if (n%2==0)
{printf("\nEnter the size of linked list :");
scanf("%d",&n);
}
else
printf("\nGive an even input");
listcreate(&head,&tail,n);
display();rev_traverse(tail);
swap(&head,&tail);
printf("\nAfter swap -");
display();
return 0;
} 