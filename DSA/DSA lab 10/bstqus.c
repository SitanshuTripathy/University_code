#include<stdio.h>
#include<stdlib.h>
typedef struct bt{
int data;
struct bt *right;
struct bt *left;
}node;
node *root=NULL;

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
                                     
int numberleafnode(node *tree){
if(tree==NULL)
return 0;
else if(tree->left==NULL&&tree->right==NULL)
return 1;
else
return numberleafnode(tree->left)+numberleafnode(tree->right);
}

int nonleafnode(node *tree){
if(tree==NULL)
return 0;
if(tree->left!=NULL&&tree->right!=NULL)
return 1+nonleafnode(tree->left)+nonleafnode(tree->right);
return 0;
} 


int numbernode(node *tree){
 if(tree==NULL)
return 0;
return 1+numbernode(tree->left)+numbernode(tree->right);   
}

int sumnode(node *tree){
    if (tree==NULL) return 0;
    return tree->data+sumnode(tree->left)+sumnode(tree->right);
    }

int Tree_Depth(node *tree)
{
  int left, right;
  if(tree==NULL)
    return 0;
  else
  {
    left = Tree_Depth(tree->left);
    right = Tree_Depth(tree->right);
    if(left > right)
      return (left +1);
    else
      return (right+1);
  }
}
void Nodes_at_MaxDepth(node *tree, int depth)
{
  if(tree==NULL||depth<0)
    return;
  if(depth==1)
  {
    printf( "%d ", tree->data );
    return ;
  }
  Nodes_at_MaxDepth( tree->left, depth-1 ) ;
  Nodes_at_MaxDepth( tree->right, depth-1 ) ;
}


int main(){
 int ch,n, val;
  printf("\n0.TO EXIT ");
  printf("\n1.To create ");
  printf("\n2.Count number of leaf nodes in the tree");
  printf("\n3.count number of non-leaf nodes in the tree.");
  printf("\n4.find number of nodes in the tree. ");
  printf("\n5.find sum of all nodes of the tree. ");
  printf("\n6.print height and depth of the tree. ");
  printf("\n7.find nodes which are at maximum depth in the tree. ");
  
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
    printf("\nThe number of leaf node = %d",numberleafnode(root)); 
      break;
    case 3:
      printf("\nThe number of nonleaf node = %d",nonleafnode(root));  
      break;
    case 4:
      printf("number of node= %d",numbernode(root));
      break;
    case 5:
    printf("sum of node= %d",sumnode(root));
      break; 
    case 6:
    printf("Depth = %d",Tree_Depth(root)) ;
      break;
    case 7:
   Nodes_at_MaxDepth(root, Tree_Depth(root));
      break;
   default:
      printf("\nInvalid input");
      break;
    }
  }
return 0;
}