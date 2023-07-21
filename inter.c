#include<stdio.h>
void main() {
   int i,j,k,n,m,uni[20],set1[20],set2[20],count=0,flag=0; 
   printf("Enter size of first set : ");
   scanf("%d",&n);
   printf("Enter elements to set 1 : ");
   for(i=0;i<n;i++)
     scanf("%d", &set1[i]);


   for(i=0;i<n;i++)
      {
       for(j=0;j<n;j++)
         {
         if(i==j)
            continue;
         else if(set1[i]==set1[j])
            {
	     for(k=j;k<n;k++)
		set1[k]=set1[k+1];
            n--;
           }
         }
      }
   printf("Duplicates removed from set 1 :\n");
   for(i=0;i<n;i++)
       printf("%d ", set1[i]);

   printf("Enter size of second set : ");
   scanf("%d",&m);
   printf("Enter elements to set 2 : ");
   for(i=0;i<m;i++)
     scanf("%d", &set2[i]);

   for(i=0;i<m;i++)
      {
       for(j=0;j<m;j++)
         {
         if(i==j)
            continue;
         else if(set2[i]==set2[j])
            {
	     for(k=j;k<m;k++)
		set2[k]=set2[k+1];  
            m--;
           }
         }
      }
   printf("Duplicates removed from set 2 :\n");
   for(i=0;i<m;i++)
       printf("%d ", set2[i]);
       
   printf("\nIntersection of set 1 and set 2: ");

   for(i = 0; i < n; i++)
       {
        for (j = 0; j < m; j++) {
          
           if(set1[i] == set2[j])
            {
               printf("%d ", set1[i]);
            }
       }
   } 
}

