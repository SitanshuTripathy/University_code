#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
    }*stnode,*ennode; 
   
   void listcreate(int n){
    int i,data;
    struct node *fnnode;
    if (n>=1)
    {
       stnode=(struct node *)malloc(sizeof(struct node));
       if (stnode!=NULL)
       {
        printf("\nEnter the value of node1 :");
        scanf("%d",&data);
        stnode->data=data;
        stnode->prev=NULL;
        stnode->next=NULL;
        ennode=stnode;
       for ( i = 2; i <=n ; i++)
       {
         fnnode=(struct node*)malloc(sizeof(struct node));
         if (fnnode!=NULL)
         {
            printf("\nEnter the value of node%d :",i);
            scanf("%d",&data);
            fnnode->data=data;
            fnnode->prev=ennode;
            fnnode->next=NULL;
            ennode->next=fnnode;
            ennode=fnnode;
         }
         else
        printf("\n Memory cant be allocated");
        }
    }
}
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
listcreate(n);
display();
return 0;
}

