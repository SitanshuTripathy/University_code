#include<stdio.h>
#include<stdlib.h>
struct node
{
char value;
struct node *left_child, *right_child;
};
void print(struct node *root_node) // displaying the nodes!
{
if (root_node != NULL)
{
print(root_node->left_child);
printf("%c ", root_node->value);
print(root_node->right_child);
}
}
void inorder(struct node *root){
if(root!=NULL){
inorder(root->left_child);
printf("%c ",root->value);
inorder(root->right_child);
}

}
struct node *new_node(char value)
{
struct node *tmp = (struct node *)malloc(sizeof(struct node));
tmp->value = value;
tmp->left_child = tmp->right_child = NULL;
return tmp;
}
struct node* insert_node(struct node* node, char value) // inserting nodes!
{
if (node == NULL) return new_node(value);
if (value < node->value)
{
node->left_child = insert_node(node->left_child, value);
}
else if (value > node->value)
{
node->right_child = insert_node(node->right_child, value);
}
return node;
}
int main(){
struct node *root_node = NULL;
root_node = insert_node(root_node, 'A');
insert_node(root_node, 'A');
insert_node(root_node, 'B');
insert_node(root_node, 'C');
insert_node(root_node, 'D');
insert_node(root_node, 'E');
insert_node(root_node, 'F');
print(root_node);
printf("\n");
inorder(root_node);
return 0;
}