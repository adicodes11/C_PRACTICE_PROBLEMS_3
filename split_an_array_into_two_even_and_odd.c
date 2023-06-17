// Program to split an array into two arrays: even and odd

#include <stdio.h>

void array_input(int arr[], int size)
{
    printf("Enter the array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void array_output(int arr[], int size)
{
    printf("Displaying the array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void array_splitter(int arr[], int size)
{
    int even[20],odd[20],even_count = 0, odd_count = 0;
    for(int i=0;i<size ;i++)
    {
        if(arr[i]%2==0)
        {
            even[even_count]= arr[i];
            even_count++;
        }
        else
        {
            odd[odd_count]=arr[i];
            odd_count++;
        }
    }
    printf("Splitted and displaying the even array elements: \n");
    array_output(even,even_count);
    printf("Splitted and displaying the odd array elements: \n");
    array_output(odd,odd_count);
}

int main()
{
    int arr[20], n;
    printf("Enter the array size: ");
    scanf("%d", &n);

    array_input(arr, n);
    array_output(arr, n);
    array_splitter(arr, n);

    return 0;
}