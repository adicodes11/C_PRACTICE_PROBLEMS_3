// Program to round a double to a specific number of decimal places

#include <stdio.h>

double _round(double number, int n)
{
    for (int i = 0; i < n; i++)
    {
        number *= 10;
    }

    if ((number - (int)number) >= 0.5)
    {
        number = (int)number;
        number++;
        for (int i = 0; i < n; i++)
        {
            number /= 10;
        }
    }

    return number;
}

int main()
{
    double number;
    int n;
    printf("Enter the number: ");
    scanf("%lf", &number);
    printf("Enter the number of decimal places to roundoff: ");
    scanf("%d", &n);

    double rnum = _round(number, n);
    printf("After rounding off: %lf\n", rnum);

    return 0;
}