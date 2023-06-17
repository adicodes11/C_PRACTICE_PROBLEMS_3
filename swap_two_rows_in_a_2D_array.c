// Program to swap two rows in a 2D array

#include <stdio.h>

void matrix_row_interchanger(int arr[10][10], int rows, int cols, int to, int from)
{
    to--;
    from--;
    int temp;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            temp = arr[to][j];
            arr[to][j] = arr[from][j];
            arr[from][j] = temp;
        }
        break;
    }
}

int main()
{
    int arr[10][10], rows, cols, from, to;
    printf("Enter the matrix row size: ");
    scanf("%d", &rows);
    printf("Enter the matrix column size: ");
    scanf("%d", &cols);

    printf("Enter the matrix elements: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter to interchange row number: ");
    scanf("%d", &to);
    printf("Enter with interchange row number: ");
    scanf("%d", &from);

    matrix_row_interchanger(arr, rows, cols, to, from);

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