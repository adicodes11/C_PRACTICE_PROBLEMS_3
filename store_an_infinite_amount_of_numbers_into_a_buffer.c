// Program to store an unknown "infinite" amount of numbers from user input into a buffer

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BUFFER_SIZE 1024

int main()
{
    double buffer[BUFFER_SIZE];
    double temp;
    int i = 0;

    while (true)
    {
        printf("Enter number: ");
        scanf("%lf", &temp);

        if (temp == 0.0101)
        {
            break;
        }
        else
        {
            buffer[i] = temp;
            i++;
        }

        if (i + 1 == BUFFER_SIZE)
        {
            printf("Buffer max limit exceeded...\n");
            return 1;
        }
    }

    printf("Displaying the entered numbers\n");
    for (int j = 0; j < i; j++)
    {
        printf("%lf\n", buffer[j]);
    }

    // Dynamically
    double *ptr = malloc(sizeof(double));
    i = 0;

    while (true)
    {
        printf("Enter number: ");
        scanf("%lf", &temp);

        if (temp == 0.0101)
        {
            break;
        }
        else
        {
            ptr = realloc(ptr, (i+1) * sizeof(double));
            ptr[i] = temp;
            i++;
        }
    }
    printf("Second time displaying the entered numbers\n");
    for (int j = 0; j < i; j++)
    {
        printf("%lf\n", ptr[j]);
    }
    free(ptr);

    return 0;
}