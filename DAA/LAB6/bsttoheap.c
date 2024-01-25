//bst to maxheap
#include <stdio.h>
#include <stdlib.h>

// Structure for a binary tree node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new node
struct TreeNode* createNode(int data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to perform in-order traversal and store elements in an array
void inOrderTraversal(struct TreeNode* root, int* array, int* index) {
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left, array, index);
    array[(*index)++] = root->data;
    inOrderTraversal(root->right, array, index);
}

// Function to build a max heap from an array
void buildMaxHeap(int* array, int size) {
    for (int i = (size / 2) - 1; i >= 0; i--) {
        int largest = i;
        int leftChild = 2 * i + 1;
        int rightChild = 2 * i + 2;

        if (leftChild < size && array[leftChild] > array[largest]) {
            largest = leftChild;
        }

        if (rightChild < size && array[rightChild] > array[largest]) {
            largest = rightChild;
        }

        if (largest != i) {
            // Swap the elements to maintain max heap property
            int temp = array[i];
            array[i] = array[largest];
            array[largest] = temp;
            buildMaxHeap(array, size);
        }
    }
}


// Function to reconstruct a BST from a max heap
struct TreeNode* maxHeapToBST(int* array, int start, int end) {
    if (start > end) {
        return NULL;
    }

    int mid = (start + end) / 2;
    struct TreeNode* root = createNode(array[mid]);

    root->left = maxHeapToBST(array, start, mid - 1);
    root->right = maxHeapToBST(array, mid + 1, end);

    return root;
}

// Function to print the in-order traversal of a tree
void printInOrder(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    printInOrder(root->left);
    printf("%d ", root->data);
    printInOrder(root->right);
}

int main() {
    // Create a sample binary search tree
    struct TreeNode* root = createNode(4);
    root->left = createNode(2);
    root->right = createNode(6);
    root->left->left = createNode(1);
    root->left->right = createNode(3);
    root->right->left = createNode(5);
    root->right->right = createNode(7);
    printf("The original bst =");
   printInOrder(root);
    printf("\n");
    // Perform in-order traversal to get BST elements into an array
    int size = 7;
    int array[size];
    int index = 0;
    inOrderTraversal(root, array, &index);

    // Build a max heap from the array
    buildMaxHeap(array, size);

    // Reconstruct a BST from the max heap
    struct TreeNode* maxHeapToBSTRoot = maxHeapToBST(array, 0, size - 1);

    // Print the in-order traversal of the reconstructed BST
    printf("In-order traversal of the reconstructed BST: ");
    printInOrder(maxHeapToBSTRoot);
    printf("\n");

    return 0;
}
