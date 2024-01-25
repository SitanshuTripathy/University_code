#include<stdio.h>
#include <stdlib.h>
int dq[10];
int left=-1;
int right =-1;
void insertright(){
int item;
if ((left==0 && right == 10-1)||(left== right+1)){
    printf("\nQueue Overflow");
    return;
}
if (left== -1){
    left=0;
    right=0;}
else{
    if (right==10-1)
    right=0;
    else 
    right=right+1;
    printf("\nEnter the elements in queue");
    scanf("%d",&item);
    dq[right]=item;
}} 
void insertleft(){
    int item;
    if ((left==0 && right == 10-1)||(left== right+1)){
    printf("\nQueue Overflow");
    return;
}
if (left== -1){
    left=0;
    right=0;}
    else{
   if(left==0)
   left=10-1;
   else 
    left=left-1;
    printf("\nEnter the elements in queue");
    scanf("%d",&item);
    dq[left]=item;   
    }}
void leftdelete(){
    if (left==-1){
    printf("\nQUEUE is UNDERFLOW");    
    return;
    }
    printf("\nElement delete from queue %d",dq[left]);
   if (left== right){
    left=-1;
    right=-1;}
  else{
    if (left=10-1)
   left=0;
    else
    left=left+1;
  }
}
void rightdelete(){
    if (left==-1){
    printf("\nQUEUE is UNDERFLOW");    
    return;
    }
    printf("\nElement delete from queue %d",dq[right]);
   if (left== right){
    left=-1;
    right=-1;}
  else{
    if (right==0)
   right=10-1;
    else
    right=right-1;
  }}
void peek(){
    printf("\nThe peek elemnnt from left %d",dq[left]);
    printf("\nThe peek elemnnt from right %d",dq[right]);
}
void display(){
int front=left, rear=right;
printf("The queue elements are :");
for (int i=front;i<=rear; i++){ 
      printf(" %d",dq[i]);
      }}

void isempty(){
    if (left==-1){
    printf("\nQUEUE is UNDERFLOW");    
   } 
}
void isfull(){
   if ((left==0 && right == 10-1)||(left== right+1))
    printf("\nQueue Overflow"); 
}
void outputrestc(){
  int ch;

printf("\n1.to check the queue is empty");
printf("\n2.to check the queue is full");
printf("\n3.to display the queue ");
printf("\n4.to insert right");
printf("\n5.to insert left");
printf("\n6.to delete right");
printf("\n7.to peek");
printf("\n8.to exit the menu");                   
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
insertright();
break;
case 5:
insertleft();
break;
case 6:
rightdelete();
break;
case 7:
peek();
    break;
case 8:
printf("\nEXIT THE MENU");
exit(0);
break;
default:
printf("\nInvalid input");
    break;
}}}
void inputrestc(){
  int ch;

printf("\n1.to check the queue is empty");
printf("\n2.to check the queue is full");
printf("\n3.to display the queue ");
printf("\n4.to insert left");
printf("\n5.to delete left");
printf("\n6.to delete right");
printf("\n7.to peek");
printf("\n8.to exit the menu");
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
insertleft();
break;
case 5:
leftdelete();
break;
case 6:
rightdelete();
break;
case 7:
peek();
    break;
case 8:
printf("\nEXIT THE MENU");
exit(0);
break;
default:
printf("\nInvalid input");
    break;
}}}


int main(){
int ch;

printf("\n1. OUTPUT restricted");
printf("\n2. INPUT resticted");
printf("\n3.to exit the menu");
while (1){
printf("\nEnter your choice :");
scanf("%d",&ch);
switch (ch){
case 1:
outputrestc();
    break;
case 2:
inputrestc();
    break;
case 3:
exit(0);
    break;

default:
printf("\nInvalid input");
    break;}}
return 0;
}