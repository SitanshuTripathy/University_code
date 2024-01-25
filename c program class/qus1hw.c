#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *next;
 struct node *prev;
};
int main(){
struct node *head;
struct node *one;
struct node *two;
struct node *three;

one =(struct node*)malloc(sizeof(struct node*));
two=(struct node*)malloc(sizeof(struct node*));
three=(struct node*)malloc(sizeof(struct node*));

one->data=2;
one->prev=NULL;
one->next=two;
two->prev=one;
two->data=3;
two->next=three;
return 0;
}