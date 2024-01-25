#include<stdio.h>
#include<stdlib.h>
int qu[50];
int rear=-1;
int front=-1;
int st[50];int top=-1;
void enqueue(int item){
if(front==-1){
    front=0;
    rear=0;
    qu[rear]=item;
    }
else{

    rear=rear+1; 
    qu[rear]=item;
}}
void push(int item ){
top++;
st[top]=item;
}
int pop(){
return st[top--];
}
void deq(){
int item;
item=qu[front];
front =front+1;
}

void reverse(){
    while (front!=rear)
    {
        push(qu[front]);
        deq();
    }
    while (top!=-1)
    {
        enqueue(st[top]);
        pop();
    }
}
void display(){
    printf("\nThe content of the queue are: ");
    for (int i=front;i<=rear; i++){ 
      printf(" %d",qu[i]);
      }
    }
int main(){
int a;
int n;
printf("\nEnter the size =");scanf("%d",&n);
for (int i = 0; i < n; i++)
{scanf("%d",&a);
    enqueue(a);
}
display();
reverse();
display();
return 0;
}