// ******* This program is SCRAP, checkout shuffle_a_2d_array_2nd_method.c *******
// Reason: stupidity of generating unique numbers as unique number here will be just 0 - rows or 0 - cols , 
// I will suggest to run the DEBUG by uncommenting #define DEBUG and you will notice the reason why I said that.



// Program to shuffle a 2D array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// #define DEBUG

void shuffler(int arr[10][10], int rows, int cols)
{
    srand(time(NULL));
    int ur[10];
    int uc[10];
    bool unique;
    int temp, num;

    for (int i = 0; i < rows; i++)
    {
        do
        {
            unique = true;
            num = rand() % rows;
            for (int j = 0; j < i; j++)
            {
                if (ur[j] == num)
                {
                    unique = false;
                    break;
                }
            }
        } while (!unique);
        ur[i] = num;
    }

    #ifdef DEBUG
    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        printf("%-4d", ur[i]);
    }
    #endif

    for (int i = 0; i < cols; i++)
    {
        do
        {
            unique = true;
            num = rand() % cols;
            for (int j = 0; j < i; j++)
            {
                if (uc[j] == num)
                {
                    unique = false;
                    break;
                }
            }
        } while (!unique);
        uc[i] = num;
    }

    #ifdef DEBUG
    printf("\n");
    for (int j = 0; j < cols; j++)
    {
        printf("%-4d", uc[j]);
    }
    #endif

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[ur[i]][uc[j]];
            arr[ur[i]][uc[j]] = temp;
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

