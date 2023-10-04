#include<stdio.h>
void swap(int heap[], int i, int j)
   {
    int temp=heap[i];
    heap[i]=heap[j];
    heap[j]=temp; 
    }


void maxHeapify(int heap[], int n, int i)
    {
     printf("Nitish recusion : %d - %d ",i,heap[i]);
     int largest=i;
     int left=2*i+1;
     int right=2*i+2;
     if(left<n && heap[left]<heap[largest])
        largest=left;
     if(right<n && heap[right]<heap[largest])
        largest=right; 
     if(largest!=i) { 
        swap(heap,i,largest);
        maxHeapify(heap,n,largest);
       }
    }


void buildMaxHeap(int heap[], int n) {
   printf("\n MAX HEAP : ");
   for(int i=(n/2)-1;i>=0;i--)
       maxHeapify(heap,n,i);
}

int insertMaxElement(int heap[], int n, int element)
    {
    if(n>=100)
      {
       printf("HEAP IS FULL");
       return n;
      }
     /*int i=n++;
     heap[i]=element;
     while(i>0 && heap[(i-1)/2]<heap[i])
          {
           int j=(i-1) /2;
           swap(heap,i,j);
           i=(i-1)/2;
          }
     return n; */
      heap[n++]=element;
      if(n>1) 
          buildMaxHeap(heap,n);
       return n;
    }
void displayHeap(int heap[], int n) {
    for(int i=0;i<n;i++)
        printf("%d ", heap[i]);
    printf("\n"); 
    }


int deleteMaxElement(int heap[], int n) {
   if(n<=0) {
        printf("Heap is empty");
        return 0;
        }
     heap[0]=heap[n-1];
     n--;
     
    maxHeapify(heap,n,0);
    return n;
}


int main() {
      int heap[100], element, n=0,choice;
      while(1) {
	printf("\n1.Insert 2.Delete 3.Display 4.Exit\n");
        printf("Enter ur choice : ");
        scanf("%d", &choice);
        switch(choice) {
              case 1:
                     printf("Enter element to insert : ");
                     scanf("%d", &element);
                     n=insertMaxElement(heap,n,element);
		    break;
              case 2:
                    n=deleteMaxElement(heap, n); 
                    break;
              case 3:
                    displayHeap(heap,n);
                    break;
              case 4:
                     return 0;
              default:
                     printf("\nInvalid choice");
	   }
	}
     return 0; 

}
