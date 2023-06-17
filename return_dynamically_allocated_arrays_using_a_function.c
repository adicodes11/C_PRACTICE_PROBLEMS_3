// Program to return dynamically allocated arrays using a function

#include <stdio.h>
#include <stdlib.h>

void allocate_two_arrays(int **arr1, int **arr2, int size1, int size2)
{
    (*arr1) = malloc(size1 * sizeof(int));
    (*arr2) = malloc(size2 * sizeof(int));

    printf("Enter array1 elements: ");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&(*arr1)[i]);
    }

    printf("\nEnter array2 elements: ");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&(*arr2)[i]);
    }
}

int main()
{
    int *arr1 = NULL;
    int *arr2 = NULL;
    int n1, n2;
    printf("Enter array1 size: ");
    scanf("%d", &n1);
    printf("Enter array2 size: ");
    scanf("%d", &n2);

    allocate_two_arrays(&arr1, &arr2, n1, n2);

    printf("\nDisplaying the array1 contents: ");
    for (int i = 0; i < n1; i++)
    {
        printf("%-5d", arr1[i]);
    }

    printf("\nDisplaying the array2 contents: ");
    for (int i = 0; i < n2; i++)
    {
        printf("%-5d", arr2[i]);
    }

    return 0;
}