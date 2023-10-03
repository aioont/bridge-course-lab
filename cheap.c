#include <stdio.h>

void swap(int heap[], int i, int j) {
   int temp = heap[i];
   heap[i] = heap[j];
   heap[j] = temp;
}

int insertElement(int heap[], int n, int element) {
   if (n >= 100) {
      printf("Heap is full, can't insert\n");
      return n;
   }
   n++;
   int i = n - 1;
   heap[i] = element;
  
   while (i > 0 && heap[(i - 1) / 2] < heap[i]) {
      int j = (i - 1) / 2;
      swap(heap, i, (i - 1) / 2);
      i = (i - 1) / 2;
   }
   return n;
}

void maxHeapify(int heap[], int n, int i) {
   int largest = i;
   int left = 2 * i + 1;
   int right = 2 * i + 2;

   if (left < n && heap[left] > heap[largest])
      largest = left;
  
   if (right < n && heap[right] > heap[largest])
      largest = right;
  
   if (largest != i) {
      swap(heap, i, largest);
      maxHeapify(heap, n, largest);
   }
}

void buildMaxHeap(int heap[], int n) {
   for (int i = n / 2 - 1; i >= 0; i--)
      maxHeapify(heap, n, i);
}

void displayHeap(int heap[], int n) {
   printf("MAX heap:\n");
   for (int i = 0; i < n; i++)
      printf("%d ", heap[i]);
   printf("\n");
}

int deleteMaxElement(int heap[], int n) {
   if(n<=0) {
       printf("Heap is empty.\n");
       return n;
   }
  
  int root=heap[0];
  heap[0]=heap[n-1];
  n--;
  maxHeapify(heap, n, 0);

  return n; 
}

void sort(int heap[], int n) {
   int val = 0;
   int size = n;  // Store the initial size of the heap
   while (n > 0) {
      val = deleteMaxElement(heap, n);
      heap[n] = val;
      n--;
   }
   displayHeap(heap, size);  // Display only the initially stored elements
}


int main() {
   int heap[100];
   int n = 0;
   int choice, element;
   while (1) {
      printf("\n1. Insert element\n");
      printf("2. Display\n");
      printf("3. Delete\n");
      printf("4. Exit\n");
      printf("5. Sort \n");
      printf("Enter choice: ");
      scanf("%d", &choice);
      
      switch (choice) {
         case 1:
            printf("Enter element to insert: ");
            scanf("%d", &element);
            n = insertElement(heap, n, element);
            break;
         case 2:
            displayHeap(heap, n);
            break;
         case 3:
            n=deleteMaxElement(heap,n);
            break;
         case 4:
            return 0;
         case 5:
            sort(heap, n);
            break;
         default:
            printf("Invalid choice\n");
      }
   }
   return 0;
}
