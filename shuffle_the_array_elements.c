// Program to shuffle an array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    srand(time(NULL));
    int arr[10], n, num, u[10], j = 0;
    bool unique = true;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        do
        {
            unique = true;
            num = rand() % n;
            for (int j = 0; j < i; j++)
            {
                if (u[j] == num)
                {
                    unique = false;
                }
            }
        } while (!unique);
        u[i] = num;
    }

    for(int i=0;i<n;i++)
    {
        int temp = arr[i];
        arr[i]=arr[u[i]];
        arr[u[i]] = temp;
    }

    for (int i = 0; i < n; i++)
        printf("%-2d", arr[i]);

    return 0;
}