#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

char stack[MAX];
int top=-1;
void push(char val) {
    stack[++top]=val;
   }
void pop() {
  if(top==-1)
     return '\0';
  else
     return(stack[top--]);
}
void main() {
  int i=0,k=0;
  char infix[20], postfix[20],val;
  printf("Enter the infix expression : ");
  scanf("%s", infix);
  push('#');
  printf("Your INFIX expression : %s", infix);
  len=strlen(infix);
  for(i=0;i<len;i++)
     {
      if(ch=='(')
         push(ch);
     else 
         if(isalnum(ch))
            postfix[k++]=ch;
         else
            if(ch==')')
              {
               while(stack[top]!='(')
                  postfix[k++]=pop();
               val=pop();
              }
            else {
               while(pre(stack[top])>=pre(ch))
                     postfix[k++]=pop();
 	    push(ch);
            }
     }
    while(stack[top]!='#')
 	postfix[k++]=pop();
    postfix[k]='\0';
     
