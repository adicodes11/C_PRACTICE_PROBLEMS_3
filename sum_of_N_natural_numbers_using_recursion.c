// Program to sum first N natural numbers using recursion

#include <stdio.h>

int N_sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + N_sum(n - 1);
}

int main()
{
    int n, sum;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    sum = N_sum(n);
    printf("The sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}