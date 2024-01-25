#include<stdio.h>
#include<stdlib.h>
int qu[100];
int rear= -1;
int front= -1;
void enqueue(int item){
    if (front==-1){
        front=0;
        rear=rear+1;
        qu[rear]=item;
    }
    else{
        rear=rear+1;
        qu[rear]=item;
    }
}
void dequeue(){
    int item;
    item=qu[front];
    front=front+1;
}
void isempty(){
    if (front=rear=-1)
    {
        printf("\nThe queue is empty");
    }
    else
    printf("\nThe queue is not empty");
}
void isfull(){
    if (rear==100-1){
       printf("\nThe queue is full");
    }
    else 
    printf("\n The queue is not full");
}
void peek(){
    printf("The peak element of the queue is = %d",qu[front]);
}
void display(){
    printf("\nThe content of the queue are: ");
    for (int i=front;i<=rear; i++){ 
      printf(" %d",qu[i]);
      }
    }
int main(){
  int item,ch;

printf("\n1.to check the queue is empty");
printf("\n2.to check the queue is full");
printf("\n3.to display the queue ");
printf("\n4.to enqueue");
printf("\n5.to dequeue");
printf("\n6.to peek");
printf("\n7.to exit the menu");
while (1){
printf("\nEnter your choice :");
scanf("%d",&ch);
switch (ch){
case 1:
isempty();
    break;
case 2:
isfull();
    break;
case 3:
display();
    break;
case 4:
printf("\nEnter the element in the queue :");
    scanf("%d",&item);
    enqueue(item);
break;
case 5:
dequeue();
    break;
case 6:
peek();
    break;
case 7:
printf("\nEXIT THE MENU");
exit(0);
break;
default:
printf("\nInvalid input");
    break;
}
}
return 0;
}

