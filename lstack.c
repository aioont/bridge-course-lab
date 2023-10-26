#include<stdio.h>
#include<stdlib.h>

struct node {
   int val;
   struct node *next;
};

struct node *top=NULL, *temp;

int main() {
   int ch,value;
   while(1) {
     printf("\n1. Push 2. Pop 3.Display 4.Exit \n");
     printf("Enter ur choice : ");
     scanf("%d", &ch);
     switch(ch) {
        case 1:
               printf("Enter the val to insert : ");
               scanf("%d", &value);
               temp=(struct node *)malloc(sizeof(struct node));
               temp->val=value;
               temp->next=top;
               top=temp;
               break;
        case 2:
               //temp=top;
               printf("\nDel elements ...........");
               if(top==NULL)
                 printf("\nStack is empty !!!");
               else {
                  printf("\n Node %d is deleted ", top->val);
                  top=top->next;
                 // free(temp);
               }
               break;
        case 3:
               temp=top;
               if(temp==NULL) {
                  printf("NULL");
                }
              
               while(temp!=NULL)  {
                  printf("%d -> ",temp->val);
                  temp=temp->next;
               }
               break;
        case 4:
              exit(0);
      }
   }

return 0;
}
