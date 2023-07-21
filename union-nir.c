#include<stdio.h>
void main() {
        int i,j,uni[20],m,n,o=0,set1[20],set2[20];
        printf("Enter number of elements in 1st set and 2nd set : ");
        scanf("%d %d", &m, &n);
        printf("Enter %d elemnts to set 1 : ", m);
        for(i=0;i<m;i++)
                scanf("%d", &set1[i]);
	printf("Enter %d elemnts to set 2 : ", n);
        for(i=0;i<n;i++)
                scanf("%d", &set2[i]);

        for(i=0;i<m;i++)
           {
 	   for(j=0;j<o;j++)
              {
               if(set1[i]==uni[j])
                  break;
              }
              if(j==o) { 
                  uni[o]=set1[i];
                  o++;
                       }
           }
         
        for(i=0;i<n;i++)
           {
            for(j=0;j<o;j++)
               {
               if(set2[i]==uni[j])
                  break;
               }
           if(j==o) {
               uni[o]=set2[i];
               o++;
		    }
          }

       printf("Union of set 1 and set 2 : ");
       for(i=0;i<o;i++)
           printf("%d ", uni[i]);
}
