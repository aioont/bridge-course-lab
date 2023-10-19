#include<stdio.h>
#include<stdlib.h>

struct node {
  int data;
  struct node *next;
}*head=NULL;

void insertNode(int val) {
   struct node *newNode=(struct node *)malloc(sizeof(struct node));
   newNode->data=val;
   newNode->next=NULL;

   if(head==NULL)
     head=newNode;
   else {
     struct node *cur=head;
     while(cur->next!=NULL) {
        cur=cur->next;
     }
     cur->next=newNode;
    }
   printf("\nNode with data %d inserted \n", val);
}

void deleteNode(int data) {
   if(head==NULL) {
      printf("List empty");
      return;
   }
   
   if(head->data==data) {
      struct node *temp=head;
      head=head->next;
      free(temp);
      printf("Node with data %d deleted\n", data);
      return;
   }

   struct node *cur=head;
   while(cur->next!=NULL) {
      if(cur->next->data==data) {
         struct node *temp=cur->next;
         cur->next=cur->next->next;
         free(temp);
         printf("\nNode witn data %d deleted", data);
         return;
      }
      cur=cur->next;
  }         
  printf("Node with data %d not found \n",data);
}

void displayList() {
  struct node *cur=head;
  printf("\nLinked list : ");
  while(cur!=NULL) {
     printf("%d -> ", cur->data);
     cur=cur->next;
  }
  printf("NULL\n");
}

int main() {
    int choice, data;
    
    do {
        printf("\nLinked List Menu:\n");
        printf("1. Insert Node\n");
        printf("2. Delete Node\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertNode(data);
                break;
            case 2:
                printf("Enter data to delete: ");
                scanf("%d", &data);
                deleteNode(data);
                break;
            case 3:
                displayList();
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4); 
return 0;
}
