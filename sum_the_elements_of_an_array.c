// Sum the elements of an array

#include <stdio.h>

int adder(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }

    return sum;
}

int main()
{
    int arr[10], n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The sum of the arr is: %d\n",adder(arr,n));

    return 0;
}