#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
#define MAX 50
int top=-1, stack[MAX];
void push(int val)
{
 if(stack[top]==MAX-1)
    printf("\nStack Overflow !");
 else {
    top++;
    stack[top]=val;
    printf("\n %d is inserted ",val);
 }
}
void pop() {
    if(stack[top]==-1)
        printf("Stack Underflow !");
    else {
        printf("%d is deleted ", stack[top]);
        top--;
    }
}
void display() {
   int i=0;
   if(stack[top]==-1)
      printf("Stack is empty");
   else {
      for(i=0;i<=top;i++)
         printf("%d -> ",stack[i]);
 
   }
   

}
void main()
{
 // clrscr();
  int i,val,ch;
  while(1) {
     printf("\n1. PUSH 2. POP 3.DISPLAY 4. EXIT");
     printf("\n Enter your choice : ");
     scanf("%d", &ch);
     switch(ch) {
        case 1:
             printf("Enter element to insert : ");
             scanf("%d", &val);
             push(val);
             break;
        case 2:
             printf("Enter elemnet to delete : ");
             pop();
             break;
        case 3:
             display();
             break;
        case 4: exit(0);
        default: printf("\n Invalid choice");
    }
  }
 //getch();
}
