// Program to find the transpose of a matrix

#include <stdio.h>

void transpose_matrix_printer(int arr[10][10], int rows, int cols)
{
    printf("Displaying the transpose matrix:\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%-2d", arr[j][i]);
        }
        printf("\n");
    }
}

void transpose_matrix(int arr[10][10], int *rows, int *cols)
{
    int temp[10][10];
    for (int i = 0; i < *rows; i++)
    {
        for (int j = 0; j < *cols; j++)
        {
            temp[j][i] = arr[i][j];
        }
    }
    // we even need to interchange the number of rows and columns
    *rows = *rows ^ *cols;
    *cols = *rows ^ *cols;
    *rows = *rows ^ *cols;

    for (int i = 0; i < *rows; i++)
    {
        for (int j = 0; j < *cols; j++)
        {
            arr[i][j] = temp[i][j];
        }
    }
}

int main()
{
    int arr[10][10], rows, cols;
    printf("Enter the array row size: ");
    scanf("%d", &rows);
    printf("Enter the array column size: ");
    scanf("%d", &cols);

    printf("Enter the array elements: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Displaying the original matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%-2d", arr[i][j]);
        }
        printf("\n");
    }

    transpose_matrix(arr, &rows, &cols);
    printf("Displaying the transposed matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%-2d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}