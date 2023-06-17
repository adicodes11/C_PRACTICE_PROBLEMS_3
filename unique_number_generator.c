// Program to generate unique numbers

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int unique_number_generator(int u[], int n)
{
    bool unique;
    int num;
    for (int i = 0; i < n; i++)
    {
        do
        {
            unique = true;
            num = rand() % 100000;
            for (int j = 0; j < i; j++)
            {
                if (num == u[j])
                {
                    unique = false;
                    break;
                }
            }
        } while (!unique);
        u[i] = num;
    }
}

int main()
{
    int u[100], n;
    printf("Enter the number of unique numbers to be generated: ");
    scanf("%d", &n);

    unique_number_generator(u, n);
    for (int i = 0; i < n; i++)
        printf("%-20d", u[i]);

    return 0;
}
