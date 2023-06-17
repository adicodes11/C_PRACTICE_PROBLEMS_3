// Program to replace all occurrences of a value in an array

#include <stdio.h>

void array_value_replacer(int arr[], int size, int to_rplc, int rplc)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == to_rplc)
        {
            arr[i] = rplc;
        }
    }
}

int main()
{
    int arr[10], n, to_rplc, rplc;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to be replaced: ");
    scanf("%d",&to_rplc);
    printf("Enter the value with it is to be replaced: ");
    scanf("%d",&rplc);

    array_value_replacer(arr,n,to_rplc,rplc);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}