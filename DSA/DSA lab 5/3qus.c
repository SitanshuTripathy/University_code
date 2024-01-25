#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
    }*stnode,*ennode; 

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

void display(struct node *ptr){
     while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    }
void rev_traverse(struct node *tail)
{
  struct node *temp;
    for (temp = tail;temp->prev!= NULL;temp = temp->prev)
    {
        printf("%d-->",temp->data);
    }
    printf("%d\n",temp->data);
}
void isEmpty(struct node *head)
{
  if(head==NULL)
  printf("Empty List!!\n");
  else
  printf("Not Empty!!\n");
}
void insert(struct node **head ,struct node **tail){
int i,n;
           printf("Enter position : ");
        scanf("%d", &n);
        struct node *tn,*temp = *head;
        for(i=1; i<n-1; i++)
        temp = temp->next;
        tn = temp->next;
        struct node *t = (struct node*)malloc(sizeof(struct node));
        t->next = tn;
    t->prev = temp;
        tn->prev = t;
    temp->next = t;
    printf("Enter data : ");
    scanf("%d", &t->data);
}
void delete(struct node **head,struct node **tail){
    int i,n;
            printf("Enter position : ");
        scanf("%d", &n);
        struct node *pre,*t,*cur = *head;
        for(i=1; i<n; i++)
cur = cur->next;
    pre = cur->prev;
        t = cur->next;
    t->prev = pre;
        pre->next = t;
        free(cur);
}
void delete_key(struct node **head)
{
    int n;
    printf("Enter key : ");
    scanf("%d", &n);
    struct node *pre,*t,*cur = *head;
    while(cur->data!=n)
    cur = cur->next;
    pre = cur->prev;
    t = cur->next;
    t->prev = pre;
    pre->next = t;
}
void count(struct node *head)
{
    int c=0;
    struct node *temp = head;
    while(temp!=NULL)
    {
        temp = temp->next;
        c++;
    }
    printf("No. of nodes in the DLL = %d\n", c);
}
void search(struct node *head)
{
    int n,f=0,c=0;
    printf("Enter Element : ");
    scanf("%d", &n);
    struct node *cur = head;
    while(cur!=NULL)
    {
        c++;
        if(cur->data==n)
        {
            f=1;
            break;
        }
        cur = cur->next;
    }
    if(f==1)
    printf("%d is found at %d !!\n", n,c+1);
    else
    printf("Not Found !!\n");
}

int main(){
int n;
stnode=NULL;
ennode=NULL;
printf("Enter the number of node:");
scanf("%d",&n);
listcreate(&stnode,&ennode,n);
printf("\nPress 1 to display");
printf("\nPress 2 to Revese");
printf("\nPress 3 to check list for empty");
printf("\nPress 4 to insert at any position");
printf("\nPress 5 to deete for index");
printf("\nPress 6 to delete for key");
printf("\nPress 7 to count the nodes");
printf("\nPress 8 to search the element");
int x;
printf("\nEnter the option between 1 to 8 :");
scanf("%d",&x);
switch (x){
case 1:
display(stnode);
    break;
case 2:
rev_traverse(ennode);
break;
case 3:
isEmpty(stnode);
break;
case 4:
insert(&stnode,&ennode);display(stnode);
break;
case 5:
delete(&stnode,&ennode);display(stnode);
break;
case 6:
delete_key(&stnode);display(stnode);
break;
case 7:
count(stnode);
break;
case 8:
search(stnode);
break;
default:
printf("\nInvalid Input\n");
    break;
}
return 0;
}