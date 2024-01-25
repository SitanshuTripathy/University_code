 #include <stdio.h>
#include <stdlib.h>
struct node
{
    char data;
    struct node *left;
    struct node *right;
};

struct node *create(struct node *root)
{
    char data;
    printf("\nEnter the data: ");
    // scanf("%c", &data);
    gets(&data);
    if (root == NULL)
    {
        struct node *newNode;
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->left = newNode->right = NULL;
        newNode->data = data;
        root = newNode;
    }
    if (root->data == ' ')
        return NULL;
    printf("\nEnter data for left part of  [%c]: ", data);
    root->left = create(root->left);
    printf("\nEnter data for right part of [%c]: ", data);
    root->right = create(root->right);
    return root;
}
void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        printf("%c ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%c ", root->data);
        inorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf("%c ", root->data);
    }
}
int main()
{
    struct node *tree = NULL;

    tree = create(tree);
    printf("Inorder\n");
    inorder(tree);
    printf("\n");
    printf("Postorder\n");
    postorder(tree);
    printf("\n");
    printf("Preorder\n");
    preorder(tree);
    printf("\n");
}