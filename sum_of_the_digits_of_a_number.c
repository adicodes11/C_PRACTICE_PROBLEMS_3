// Program to find the sum of the digits of a number

#include<stdio.h>

int digit_sum(int n)
{
    int sum =0;
    for(;n>0;)
    {
        sum = sum + n%10;
        n/=10;
    }

    return sum;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int sum = digit_sum(n);
    printf("The sum of the digits of %d is %d\n",n,sum);

    return 0;
}