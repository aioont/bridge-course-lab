#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int tree[MAX_SIZE];
int size = 0;

void insert(int value) {
    if (size >= MAX_SIZE) {
        printf("Error : Tree is full \n");
        return;
    }

    tree[size++] = value;
}

int search(int value) {
    for (int i = 0; i < size; i++) {
        if (tree[i] == value) {
            return 1; // Value found
        }
    }
    return 0;
}

void display() {
    printf("Tree elements in the order they were inserted: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tree[i]);
    }
    printf("\n");
}

void inOrderTraversal(int current) {
    if (tree[current] == 0) {
        return;
    }

    inOrderTraversal(2 * current + 1); // Traverse left subtree
    printf("%d ", tree[current]);
    inOrderTraversal(2 * current + 2); // Traverse right subtree
}



int main() {
    int n, value;
    printf("Enter number of elements in tree : ");
    scanf("%d", &n);
    printf("Enter %d elements : ", n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &value); // Read values from the user
        insert(value);
    }

    int searchValue;
    printf("Enter a value to search for : ");
    scanf("%d", &searchValue);

    printf("Search for %d: %s\n", searchValue, search(searchValue) ? "Found" : "Not found");

    display();
    
     printf("In-Order Traversal: ");
    inOrderTraversal(0); // Start traversal from the root
    printf("\n");
    

    return 0;
}

