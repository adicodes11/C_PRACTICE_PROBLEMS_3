// Program to rotate an array left

#include <stdio.h>

void array_rotate_left(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}

void array_output(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
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
    printf("The original array: ");
    array_output(arr, n);
    array_rotate_left(arr, n);
    printf("The left rotated array: ");
    array_output(arr, n);

    return 0;
}