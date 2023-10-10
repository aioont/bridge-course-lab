#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 100

int bst[MAX_SIZE];
int size = 0;

// Function to insert a value into the BST
void insert(int value) {
    if (size >= MAX_SIZE) {
        printf("Error: BST is full.\n");
        return;
    }

    int index = 1;
    while (bst[index] != 0) {
        if (value < bst[index]) {
            index = 2 * index; // Move to the left child
        } else {
            index = 2 * index + 1; // Move to the right child
        }
    }

    bst[index] = value;
    size++;
}

// Function to search for a value in the BST
bool search(int value) {
    int index = 1;
    while (index < MAX_SIZE && bst[index] != 0) {
        if (bst[index] == value) {
            return true; // Found the value
        } else if (value < bst[index]) {
            index = 2 * index; // Move to the left child
        } else {
            index = 2 * index + 1; // Move to the right child
        }
    }
    return false; // Value not found
}

// Function to find the minimum value in the BST
int findMin() {
    int index = 1;
    while (bst[2 * index] != 0) {
        index = 2 * index; // Move to the left child
    }
    return bst[index];
}

// Helper function to find the index of a value in the BST
int findIndex(int value) {
    int index = 1;
    while (index < MAX_SIZE && bst[index] != 0) {
        if (bst[index] == value) {
            return index;
        } else if (value < bst[index]) {
            index = 2 * index; // Move to the left child
        } else {
            index = 2 * index + 1; // Move to the right child
        }
    }
    return -1; // Value not found
}

// Helper function to find the maximum value in the left subtree
int findMaxLeft(int index) {
    while (bst[2 * index + 1] != 0) {
        index = 2 * index + 1; // Move to the right child
    }
    return index;
}

void display(int index) {
    if (bst[index] != 0) {
        display(2 * index);
        printf(" %d", bst[index]); // Print the value
        display(2 * index + 1);
    }
}

// Function to delete a value from the BST
void delete(int value) {
    int index = findIndex(value);

    if (index == -1) {
        printf("%d not found in the BST.\n", value);
        return;
    }

    // Case 1: Node with no children
    if (bst[2 * index] == 0 && bst[2 * index + 1] == 0) {
        bst[index] = 0;
    }

    // Case 2: Node with one child
    else if (bst[2 * index] != 0 && bst[2 * index + 1] == 0) {
        int leftChild = 2 * index;
        bst[index] = bst[leftChild];
        bst[leftChild] = 0;
    } else if (bst[2 * index] == 0 && bst[2 * index + 1] != 0) {
        int rightChild = 2 * index + 1;
        bst[index] = bst[rightChild];
        bst[rightChild] = 0;
    }

    // Case 3: Node with two children
    else {
        int maxLeftIndex = findMaxLeft(index);
        int maxLeftValue = bst[maxLeftIndex];
        delete(maxLeftValue); // Recursively delete the maximum value in the left subtree
        bst[index] = maxLeftValue;
    }

    size--;
}

int main() {
    // Initialize the BST
    for (int i = 0; i < MAX_SIZE; i++) {
        bst[i] = 0;
    }
    int choice, elem, deleteValue, key;
    while (1) {
        printf("\n 1. Insertion");
        printf("\n 2. Deletion");
        printf("\n 3. Search");
        printf("\n 4. Display");
        printf("\n 5. Exit");
        printf("\nEnter your choice:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter the element to insert:");
                scanf("%d", &elem);
                insert(elem);
                break;
            case 2:
                printf("\nEnter the element to delete:");
                scanf("%d", &deleteValue);
                delete(deleteValue);
                break;
            case 3:
                printf("\nEnter the element to search:");
                scanf("%d", &key);
                if (search(key))
                    printf("\n%d found in the BST.\n", key);
                else
                    printf("\n%d not found in the BST.\n", key);
                break;
            case 4:
                display(1);
                break;
            case 5:
                exit(0);
        }
    }

    // Find the minimum value
    int min = findMin();
    printf("Minimum value in the BST: %d\n", min);

    printf("\n");

    return 0;
}
