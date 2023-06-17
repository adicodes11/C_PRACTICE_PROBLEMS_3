// Program to return more than one value from a function {trick}
// Actually we will just use pass by reference or pass by pointer technique

#include <stdio.h>

void calculator(int length, int breadth, int *perimeter, int *area)
{
    *perimeter = 2 * (length + breadth);
    *area = length * breadth;
}

int main()
{
    int length, breadth, area, perimeter;
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the breadth: ");
    scanf("%d", &breadth);

    calculator(length, breadth, &perimeter, &area);
    printf("Perimeter: %d\nArea: %d\n", perimeter, area);

    return 0;
}