#include<stdio.h>

void main() {
	int i,j,n,length,count;
	printf("Enter number of elements : ");
	scanf("%d", &n);
        int arr[n];
        printf("Enter elements of array : ");
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	length=sizeof(arr)/sizeof(arr[0]);
	int visited=-1;
        int fr[length];

	for(i=0;i<length;i++)
	 {
	  count=1;
	  for(j=i+1;j<length;j++)  
           {
	    if(arr[i]==arr[j])
	      {
               count++;
	       fr[j]=visited;
	      }
           }
           if(fr[i]!=visited)
		fr[i]=count;
	 }

	printf("\nElements : Frequency\n");
	for(i=0;i<length;i++)
           {
	    if(fr[i]!=visited)
              {
                printf("%d       :        %d\n", arr[i], fr[i]);
              }
 	   }
}

/*
Enter number of elements : 5
Enter elements of array : 1 2 3 1 2

Elements : Frequency
1       :        2
2       :        2
3       :        1
*/



