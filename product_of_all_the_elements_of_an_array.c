// Program to calculate the product of all the elements of an array

#include <stdio.h>

int array_product(int arr[], int size)
{
    int product = 1;
    for(int i=0;i<size;i++)
    {
        product*=arr[i];
    }

    return product;
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

    int product = array_product(arr, n);
    printf("The product of all the elements of an array is: %d\n", product);

    return 0;
}