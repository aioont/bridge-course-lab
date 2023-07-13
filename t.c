#include<stdio.h>

void main() {
  int a,b,c;
 printf("Enter 3 sides of traingle : ");
 scanf("%d %d %d",&a,&b,&c);
 if(a==b && b==c && a==c)
   printf("Its a equilateral triangle ");
 else if(a==b || b==c || a==c)
   printf("Its a iscoless triangle");
 else
   printf("Its a scalene triangle");
}
