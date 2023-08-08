#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int front=-1,rear=-1, queue[MAX];

void enqueue(int val) {
    if(rear==MAX-1)
      printf("Queue overflow");
    else {
     queue[++rear]=val;
     if(front==-1)
        front++;
     printf("Element inserted !");
    }
}

void dequeue() {
    if(front>rear || front==-1)
       printf("Queue underflow");
    else {
       printf("%d is deleted ! ", queue[front]);
       front++;
    }
       
}

void display() {
int i=0;   
if(front>rear || front==-1)
      printf("Queue is empty");
   else {
     for(i=front;i<=rear;i++)
         printf("%d => ", queue[i]);
   }
}

void main() {
  int i, val, ch;
  while(1) {
     printf("\n1.ENQUEUE 2.DEQUEUE 3.DISPLAY 4.EXIT");
     printf("\nEnter your choice : ");
     scanf("%d", &ch);
     switch(ch) {
        case 1:
              printf("\nEnter value to insert : ");
              scanf("%d", &val);
              enqueue(val);
              break;
        case 2:
              dequeue();
              break;
        case 3:
              display();
              break;
        case 4: exit(0);
        default: printf("\n Invalid choice");
       }
    }
}
