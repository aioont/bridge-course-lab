#include<stdio.h>
void main() {
 int i,j,k,l,n;
 printf("Enter no of rows : ");
 scanf("%d", &n);
 for(i=0;i<n;i++)
  {
  for(j=0;j<i;j++)
    {
    printf("*");
   }
  printf("\n");
}  
 for(i=n;i>0;i--)
  {
  for(j=0;j<n-i;j++)
  {
   printf(" ");
  }
  for(k=0;k<i;k++)
   {
    printf("*");
   }

 printf("\n");
}

}
