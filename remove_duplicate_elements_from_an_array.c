// Program to remove duplicate elements from an array

#include <stdio.h>

void duplicate_remover(int arr[], int *size)
{
    int n = *size;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < (n-1); k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    *size = n;
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

    duplicate_remover(arr, &n);
    printf("Displaying the array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%-2d", arr[i]);
    }

    return 0;
}