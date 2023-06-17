// Program to reverse an array

#include <stdio.h>

void reverse(int arr[], int size)
{
    int temp, n = size;
    for (int i = 0; i < size; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1];
        arr[size - 1] = temp;
        size--;
    }

    printf("Printing the reversed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int arr[10], n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverse(arr, n);

    return 0;
}