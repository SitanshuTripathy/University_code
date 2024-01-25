#include <stdio.h>
#include <stdlib.h>

// A utility function to swap two elements
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// To heapify a subtree rooted with node i which is an index in arr[]. n is size of heap
void minHeapify(int arr[], int n, int i) {
    int smallest = i; // Initialize smallest as root
    int left = 2*i + 1;
    int right = 2*i + 2;

    // If left child is smaller than root
    if (left < n && arr[left] < arr[smallest])
        smallest = left;

    // If right child is smaller than smallest so far
    if (right < n && arr[right] < arr[smallest])
        smallest = right;

    // If smallest is not root
    if (smallest != i) {
        swap(&arr[i], &arr[smallest]);

        // Recursively heapify the affected sub-tree
        minHeapify(arr, n, smallest);
    }
}

// Function to build a min heap from a given max heap
void convertMaxMin(int arr[], int n) {
    // Build min heap
    for (int i = n / 2 - 1; i >= 0; i--)
        minHeapify(arr, n, i);
}

// A utility function to print an array of size n
void printArray(int arr[], int n) {
    for (int i=0; i<n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main() {
    // Array representing max heap
    int arr[] = {9, 4, 7, 1, -2, 6, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Max Heap array: ");
    printArray(arr, n);

    convertMaxMin(arr, n);

    printf("\nMin Heap array: ");
    printArray(arr, n);
    return 0;
}
