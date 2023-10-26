#include<stdio.h>
#include<stdlib.h>

struct node {
   int data;
   struct node *next;
   };

struct node *front=NULL, *rear=NULL, *temp;


int main() {
  int ch,val;
  while(1)   {
    printf("\n1. Enqueue 2. dequeue 3.Display 4.Exit");
    scanf("%d", &ch);
    switch(ch) {
       case 1:  printf("Enter element to insert : ");
                scanf("%d", &val);
                temp=(struct node *)malloc(sizeof(struct node));
                temp->data=val;
                temp->next=NULL;
     
                if(front==NULL) {
                   front=temp;
                   rear=temp;
                }
                else {
                   rear->next=temp;
                   rear=temp;
               
                }  
                break;

       case 2:  if(front==NULL)
                   printf("\nQueue is empty");
                else if(front->next==NULL) {
                   printf("\n%d deleted ", front->data);
                   front=NULL;
                   rear=NULL;
                }
                else {
                   printf("\n%d deleted ... ", front->data);
                   front=front->next;
                }
                break;
 
      case 3:   temp=front;
                if(temp==NULL)
                   printf("\nEmpty queue");
                while(temp!=NULL) {
                   printf("%d ", temp->data);
                   temp=temp->next;
                 }

                break;
      case 4:  exit(0);
    }
 
   }
 }
