#include<stdio.h>
void main() {
  int i,j,k,l,n;
  n=5;
  for(i=n;i>0;i--)
  {
   for(j=0;j<i;j++)
    {
     printf(" ");
    }
   for(k=0;k<=n-i;k++)
      {
	printf("*");
        for(l=k;l<=k;l++)
           printf("*");
      }
  printf("\n");
  }
}
