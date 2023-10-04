#include<stdio.h>
#include<stdlib.h>
int arr[]={2,3,10,87,23,34,5,8},n=sizeof(arr)/sizeof(arr[0]);


void display()
{
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}

void maxheapify(int i)
{
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[largest])
    {
        largest=left;
    }
    if(right<n && arr[right]>arr[largest])
    {
        largest=right;
    }
    if(largest!=i)
    {
        int temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        maxheapify(largest);
    }
    
}

void buildheap()
{
    for(int i=(n/2)-1;i>=0;i--)
    {
        maxheapify(i);
    }
}


void main()
{
    int choice;
    printf("size of n : %d", n);

     for(int i=0;i<n;i++)
        buildheap();
        printf("\n Heap builded ...");
                
        display();
             
        
    
}