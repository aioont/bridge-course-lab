#include<stdio.h>
void main() {
   int num,sum=0,digit=0,rev=0,temp;

   printf("Enter a number : ");
   scanf("%d", &num);
   temp=num;
   while(num>0)
     {
     digit=num%10;
     sum=sum+digit;
     rev=rev*10+digit;
     num=num/10;
    }
 printf("\nSum of %d is %d ",temp, sum);
 printf("\nReverse of %d is %d", temp, rev);
}
