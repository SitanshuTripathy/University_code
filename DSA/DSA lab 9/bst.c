#include <stdio.h>
#include <stdlib.h>
typedef struct bst
{
  int data;
  struct bst *left;
  struct bst *right;
} node;
node *root = NULL;

void create()
{
  node *ptr, *temp, *parent;
  ptr = (node *)malloc(sizeof(node));
  printf("\nEnter the data :");
  scanf("%d", &ptr->data);

  ptr->left = NULL;
  ptr->right = NULL;
  if (root == NULL)
  {
    root = ptr;
  }
  else
  {
    parent = NULL;
    temp = root;
    while (temp != NULL)
    {
      parent = temp;
      if (ptr->data < temp->data)
      {
        temp = temp->left;
      }
      else
        temp = temp->right;
    }
    if (ptr->data < parent->data)
    {
      parent->left = ptr;
    }
    else
      parent->right = ptr;
  }
}

void inorder(node *tree)
{
  if (tree != NULL)
  {
    inorder(tree->left);
    printf(" %d", tree->data);
    inorder(tree->right);
  }
}
void Pre_Order(node *tree)
{
  if (tree != NULL)
  {
    printf("%d\t", tree->data);
    Pre_Order(tree->left);
    Pre_Order(tree->right);
  }
}
void Post_Order(node *tree)
{
  if (tree != NULL)
  {
    Post_Order(tree->left);
    Post_Order(tree->right);
    printf("%d\t", tree->data);
  }
}

void search(node *tree, int val)
{
  if (tree == NULL)
    printf("\nEmpty tree");
  else if (tree->data == val)
    printf("\nElement found at %d ", tree);
  else if (val < tree->data)
    search(tree->left, val);
  else
    search(tree->right, val);
}

void smallest(node *tree)
{
 
 if (tree->left == NULL)
    printf("\n Smallest element is %d ", tree->data);
  smallest(tree->left);
}

void largest(node *tree)
{
   if (tree->right == NULL)
    printf("\n Largest element is %d ", tree->data);
  largest(tree->right);
}
node treedelete(node *tree)
{
  if (tree != NULL)
  {
    treedelete(tree->left);
    treedelete(tree->right);
    free(tree);
  }
}

int main()
{
  int ch, val;
  printf("\n0.TO EXIT ");
  printf("\n1.To create ");
  printf("\n2.Inorder trsv");
  printf("\n3.search");
  printf("\n4.Smallest element ");
  printf("\n5.Largest element ");
  printf("\n6.Pre oreder trv ");
  printf("\n7.Post order trv ");
  printf("\n8.Deletion ");
  while (1)
  {
    printf("\nEnter your choice :");
    scanf("%d", &ch);
    switch (ch)
    {
    case 0:
      exit(0);
      break;
    case 1:
      create();
      break;
    case 2:
      inorder(root);
      break;
    case 3:
      printf("\nEnter the value :");
      scanf("%d", &val);
      search(root, val);
      break;
    case 4:
      smallest(root);
      break;
    case 5:
      largest(root);
      break;
    case 6:
      Pre_Order(root);
      break;
    case 7:
      Post_Order(root);
      break;
    case 8:
      treedelete(root);
      break;

    default:
      printf("\nInvalid input");
      break;
    }
  }
  return 0;
}