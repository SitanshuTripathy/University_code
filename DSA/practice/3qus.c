#include<stdio.h>
#include<stdlib.h>
typedef struct bst{
int data;
struct node *left;
struct node * right;
}node;
node * root=NULL;
void create(){
node *ptr ,*temp,*parent;
ptr=(node *)malloc(sizeof(node));
scanf("%d",ptr->data);
if (root==NULL)
{
    root=ptr;
}
else{
  temp=root;
  parent=NULL;
  while (temp!=NULL)
  {
    parent=temp;
    if (ptr->data<temp->data)
    {
        temp=temp->left;
    }
    else
    temp=temp->right;
  }
  if (ptr->data<parent->data)
  {
     parent->left=ptr;
  }
  else
  parent->right=ptr;


}
}
int main(){

return 0;
}