// Program to reverse an array using recursion

#include <stdio.h>

int reverser(int *arr, int low, int high)
{
    if (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;

        return reverser(arr, low + 1, high - 1);
    }
}

void reverse_array(int arr[], int size)
{
    reverser(arr, 0, size - 1);
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

    reverse_array(arr, n);

    printf("Displaying the array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%-2d", arr[i]);
    }

    return 0;
}