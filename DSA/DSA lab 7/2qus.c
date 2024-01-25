//Write a menu driven program to implement queue operations such as Enqueue, Dequeue, Peek,
//Display of elements, IsEmpty using linked list.
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*front,*rear;

void enqueue(int num){
struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->data=num;
if(front==NULL){
front=temp;rear=temp;
front->next=NULL;
rear->next=NULL;}
else{
    rear->next=temp;
    rear=temp;
    rear->next=NULL;
}
}
void dequeue(){
  struct node*temp=(struct node*)malloc(sizeof(struct node));  
if (front==NULL){
printf("\nThe queue is underflow");
}
else{
temp=front;
front=front->next;
free(temp);
}
}
void display(){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));  
    ptr=front;
    if (front==NULL){
        printf("\nThe queue is empty");}
    else{
        printf("\nThe values are :");
        while (ptr!=NULL)
        {
            printf(" %d",ptr->data);
            ptr=ptr->next;
        }
        
    }
}
void isempty(){
    if (front==NULL&&rear==NULL){
    printf("\nThe queue is empty");
    }
    else
    printf("\nThe queue is empty");
}
int main(){
int item,ch;
printf("\n1.to check the queue is empty");
printf("\n2.to display the queue ");
printf("\n3.to enqueue");
printf("\n4.to dequeue");
printf("\n5.to exit the menu");
while(1){
    printf("\nEnter your choice :");
scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        isempty();
        break;
      case 2:
        display();
        break;
      case 3:
      int num;
      printf("\nEnter the data to enter :");
      scanf("%d",&num);
      enqueue(num);
        break;
      case 4:
        dequeue();
        break;
      case 5:
        exit(0);
        break;
    default:
        break;
    }
}


return 0;
}