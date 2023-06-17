// Program to reverse an integer

#include <stdio.h>

int reverser(int n)
{
    int rev = 0;
    while(n>0)
    {
        rev = rev*10 + n%10;
        n/=10;
    }
    return rev;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int rev = reverser(n);
    printf("The reversed number is: %d\n", rev);

    return 0;
}