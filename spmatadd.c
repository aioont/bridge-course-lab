#include<stdio.h>
void main() {
	int r1,r2,c1,c2,val,a[20],b[20],i,j,k=0,m=0,n=0;
        printf("Enter number of row and column of matrix 1 : ");
	scanf("%d %d", &r1,&c1);
        printf("Enter %d elements : ", r1*c1);
        for(i=0;i<r1;i++)
	   {
            for(j=0;j<c1;j++)
               {
		scanf("%d", &val);
		if(val!=0)
                  {
                   a[k]=i;
		   a[k+1]=j;
		   a[k+2]=val;
                   k=k+3;
                  }
                }
            }
        for(i=0;i<k;i++)           
                 printf("%d ", a[i]);
	
	k=0;
	printf("\nEnter number of row and column of matrix 2 : ");
        scanf("%d %d", &r2,&c2);
        printf("Enter %d elements : ", r2*c2);
        for(i=0;i<r2;i++)
           {
            for(j=0;j<c2;j++)
               {
                scanf("%d", &val);
                if(val!=0)
                  {
                   b[k]=i;
                   b[k+1]=j;
                   b[k+2]=val;
                   k=k+3;
                  }
                }
            }

        for(i=0;i<k;i++)           
                 printf("%d ", b[i]);

        if(r1==c1 && r2==c2)
          {
           printf("\nAfter matrix addition :\n ");
           for(i=0;i<r1;i++)
              {
            for(j=0;j<c1;j++)
               {
		if((a[m]==i && a[m+1]==j) && (b[n]==i && b[n+1]==j))
                   {
                    printf("%d \t", a[m+2]+b[n+2]);
                    m=m+3;
 		    n=n+3;
                   }
                 else if(a[m]==i && a[m+1]==j) {
                    printf("%d \t", a[m+2]);
		    m=m+3;
                 }
                 else if(b[n]==i && b[n+1]==j) {
                    printf("%d \t", b[n+2]);
  		    n=n+3;
		 }
                 else
                    printf("0 \t");
	       }
	   printf("\n");
           }
         }
       else
           printf("Sparse matrix addition not possible ");
}
