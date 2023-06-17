// Program to swap two numbers without using a temporary variable

#include <stdio.h>

// Swapping using the XOR swap algorithm
void swap_using_XOR(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

// Another method
void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Before swap\na = %d\tb = %d\n", a, b);
    swap(&a, &b);
    printf("After swap1\na = %d\tb = %d\n", a, b);
    swap_using_XOR(&a, &b);
    printf("After swap2\na = %d\tb = %d\n", a, b);

    return 0;
}