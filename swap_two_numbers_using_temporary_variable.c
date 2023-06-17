// Program to swap two numbers using a temporary variable

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Before\na=%d\tb=%d\n", a, b);

    swap(&a, &b); // call by reference
    printf("After\na=%d\tb=%d\n", a, b);

    return 0;
}