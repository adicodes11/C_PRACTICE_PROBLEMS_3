#include <stdio.h>

void matrix_column_interchanger(int arr[10][10], int rows, int cols, int to, int from)
{
    to--;
    from--;
    int temp;

    // Method 1
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            temp = arr[i][to];
            arr[i][to] = arr[i][from];
            arr[i][from] = temp;
        }
        break;
    }

    // Method 2
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; i < cols; j++)
    //     {
    //         temp = arr[i][to];
    //         arr[i][to] = arr[i][from];
    //         arr[i][from] = temp;
    //         break;  // ek ek row ko krke direct dusre column k row pr jane k liye break krdege
    //     }
    // }
}

int main()
{
    int arr[10][10], rows, cols, to, from;
    printf("Enter the array row size: ");
    scanf("%d", &rows);
    printf("Enter the column size: ");
    scanf("%d", &cols);

    printf("Enter the matrix elements: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the columns to be interchanged: ");
    scanf("%d %d", &to, &from);

    matrix_column_interchanger(arr, rows, cols, to, from);

    printf("Displaying the matrix elements after interchanging:\n");
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