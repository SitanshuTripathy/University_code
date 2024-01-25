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
        printf("Enter Element 1 of the doubly linked list : ");
    scanf("%d", &temp->data);
    for (int i=1; i<n; i++){
    struct node*t=(struct node*)malloc(sizeof(struct node));
    temp->next=t;
    t->prev=temp;
        printf("Enter Element %d of the doubly linked list : ", i+1);
        scanf("%d", &t->data);
        temp = t;
        }
temp->next=NULL;
*tail=temp;
} 
   
 void display(){
    struct node *tmp;
    int n=1;
    if(stnode==NULL){
        printf("\nThe list is empty");
    }
    else{
        tmp=stnode;
        printf("\nThe entered data are:");
        while (tmp!=NULL)
        {
          printf("\nnode%d : %d",n,tmp->data);
          n++;
          tmp=tmp->next;
        }
        
    }
    }
 int main(){
    int n;
stnode=NULL;
ennode=NULL;
printf("Enter the number of node:");
scanf("%d",&n);
listcreate(&stnode,&ennode,n);
display();
return 0;
}

