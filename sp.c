#include<stdio.h>
void main() {
   int m,n,mat1,sp[20],i,j,k=0,l=0;
   printf("Enter row and columns of sparse matrix : ");
   scanf("%d %d", &m,&n);
   for(i=0;i<m;i++)
      {
      for(j=0;j<n;j++)
        { 
        printf("Enter %d elements : ", m*n);
        scanf("%d",&mat1);
        if(mat1!=0)
             {
             sp[k]=i;
             sp[k+1]=j;
             sp[k+2]=mat1;
             k=k+3;
            }
          }
       }
   
  // printf("\nRow \t Column \t Value\n");
   //for(l=0;l<k;l=l+3)
       // printf("\n%d %d %d ",sp[l],sp[l+1],sp[l+2]);
   printf("\n OUTPUT : \n");
   for(i=0;i<m;i++)
      {
       for(j=0;j<n;j++)
         {
          if(sp[l]==i && sp[l+1]==j) 
              {
               printf("%d ", sp[l+2]);
               l=l+3;
              }
           else
              printf(" 0 ");
        }
        printf("\n");

     }


}
