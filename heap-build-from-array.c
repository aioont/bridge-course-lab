#include<stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void maxHeapify(int array[], int size, int index) {
    int largest = index;
    int l = 2*index + 1;
    int r = l + 1;
    if (l < size && array[l] > array[largest]) largest = l;
    if (r < size && array[r] > array[largest]) largest = r;
    if (largest != index) {
        swap(&array[index], &array[largest]);
        maxHeapify(array, size, largest);
    }
}

void buildHeap(int array[], int size) {
    for (int i = size/2 - 1; i > -1; i--) 
        maxHeapify(array, size, i);
}

/*void insert(int array[], int* size, int value) {
    array[*size++] = value;
    if (*size == 1) return;
    buildHeap(array, *size);    
}*/

void printArray(char* str, int array[], int size) {
    printf("%s", str);
    for (int i = 0; i < size; i++) printf("  %d", array[i]);
    printf("\n");
}

int main() {
    int heap[] = {2,4,9,6,7,10,1};
    int size = sizeof(heap)/sizeof(int);
    printf("\n%d\n\n", size); 
    printArray("Original array: ", heap, size);
    buildHeap(heap, size);
    printArray("Max Heap: ", heap, size);
    
    return 0;
}
