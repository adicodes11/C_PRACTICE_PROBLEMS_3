// Program to print an array

#include <stdio.h>

void array_creator(int arr[],int size)
{
    printf("Enter the array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Printing the array elements\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]= %d\n",i,arr[i]);
    }
}

int main()
{
    int arr[10], n;
    printf("Enter the array size: ");
    scanf("%d", &n);

    array_creator(arr,n);

    return 0;
}