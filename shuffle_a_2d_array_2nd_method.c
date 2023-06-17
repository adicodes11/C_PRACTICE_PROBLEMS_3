// Program-2 shuffle a 2D array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffler(int arr[10][10], int rows, int cols)
{
    srand(time(NULL));
    int rand_rows = 0;
    int rand_cols = 0;
    int temp;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            rand_rows = rand() % rows;
            rand_cols = rand() % cols;

            temp = arr[i][j];
            arr[i][j] = arr[rand_rows][rand_cols];
            arr[rand_rows][rand_cols] = temp;
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

    printf("\nArray before\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }

    shuffler(arr, rows, cols);

    printf("\nArray after\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}