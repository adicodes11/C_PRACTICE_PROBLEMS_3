// Program to print numbers from 00 to 99 in a 10x10 grid

#include <stdio.h>

int main()
{
    // Method 1

    for (int i = 0; i < 100; i++)
    {
        if (i == 0)
        {
            printf("00 ");
        }
        else if (i % 10 == 0)
        {
            printf("\n");
            printf("%02d ", i); //%02d if single digit number raha toh 0 add krdena
        }
        else
        {
            printf("%02d ", i);
        }
    }
    printf("\n\n");

    // Method 2
    int i = 0;
    while (i <= 99)
    {
        printf("%02d ", i); //%03d try krke dekhna to better understand
        i++;
        if (i % 10 == 0)
            printf("\n");
    }

    return 0;
}