#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
  struct node *prev;   
}*stnode,*ennode;

void listcreate(int n){
    int i,num;
    struct node *fnnode;
    if (n>=1)
    {
       stnode=(struct node *)malloc(sizeof(struct node));
       if (stnode!=NULL)
       {
        printf("\nEnter the value of node1 :");
        scanf("%d",&num);
        stnode->data=num;
        stnode->prev=NULL;
        stnode->next=NULL;
        ennode=stnode;
       for ( i = 2; i <=n ; i++)
       {
         fnnode=(struct node*)malloc(sizeof(struct node));
         if (fnnode!=NULL)
         {
            printf("\nEnter the value of node%d :",i);
            scanf("%d",&num);
            fnnode->data=num;
            fnnode->prev=ennode;
            fnnode->next=NULL;
            ennode->next=fnnode;
            ennode=fnnode;
         }
         else
        printf("\n Memory cant be allocated");
        }}
}
}
void reverse(struct node **head)
{
     struct node *temp = NULL; 
     struct node *current = *head;
       while (current !=  NULL)
     {
       temp = current->prev;
       current->prev = current->next;
       current->next = temp;             
       current = current->prev;
     }     

     if(temp != NULL )
        *head = temp->prev;
}    
 
void display(struct node *ptr){
     while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    }

int main(){
 int n;
stnode=NULL;
ennode=NULL;
printf("Enter the number of node:");
scanf("%d",&n);
listcreate(n);
reverse(&stnode);
display(stnode);
return 0;
}