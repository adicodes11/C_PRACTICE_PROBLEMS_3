// Program to print a heart

#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the heart: ");
    scanf("%d", &size);
    printf("\n\n");

    for (int i = (size / 2); i <= size; i += 2)
    {
        for (int j = 1; j < size - i; j += 2)   printf(" ");    // start spaces

        for(int j = 1; j <= i ; j++ )     printf("*");    //left semicircle

        for(int j = 1 ; j <= size - i ; j++ )   printf(" ");    // mid spaces

        for(int j = 1; j <= i ; j++ )     printf("*");    // right semicricle

        printf("\n");
    }

    for (int i = size; i >= 1; i--)
    {
        for (int j = i; j < size; j++)  printf(" ");

        for (int j = 0; j <= ((i * 2) - 1); j++)    printf("*"); // j = 0 to j = ((i*2)-1) = 2*size

        printf("\n");
    }

    return 0;
}