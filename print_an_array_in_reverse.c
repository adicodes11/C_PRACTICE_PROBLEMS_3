// Program to print an array in reverse

#include<stdio.h>

void reverse_printer(int arr[],int size)
{
    for(int i=size-1;i>=0;i--)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
}

int main()
{
    int arr[10],n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    reverse_printer(arr,n);

    return 0;
}