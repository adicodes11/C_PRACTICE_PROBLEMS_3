// Program to calculate the sum of first N natural numbers

#include<stdio.h>

int N_sum(int n)
{
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n, sum1 ,sum2;
    printf("Enter the number of terms: ");
    scanf("%d",&n);

    sum1 = N_sum(n);
    printf("The sum of first %d natural numbers using function is: %d\n",n,sum1);

    sum2 = n*(n+1)/2;
    printf("The sum of first %d natural numbers using formula is: %d\n",n,sum2);

    return 0;
}