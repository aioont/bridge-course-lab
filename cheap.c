#include<stdio.h>
#include<stdlib.h>
int arr[100],n=0;

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

void insert(int value)
{
    arr[n++]=value;
    buildheap();

}

void delete()
{
    if (n > 0)
    {
        arr[0] = arr[n - 1];
        n--;
        maxheapify(0);
    }
    else
    {
        printf("Heap is empty. Cannot delete.\n");
    }
}

void sort()
{
    printf("\nMAX heap : ");
    while(n>0)
    {
        printf("%d - ",arr[0]);
        arr[0]=arr[n-1];
        n--;
        buildheap();
    }
}


void main()
{
    int choice,value;
    while(1)
    {
        printf("\n1.Instert\n2.Delete\n3.Display\n4.Sort\n5.Exit\n\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("enter the value to insert");
                    scanf("%d",&value);
                    insert(value);
                    break;
            case 2:delete();
                 break;
            case 3:display();
                break;
            case 4:
                sort();
                display();
                break;
            case 5:exit(0);
        }
    }
}
