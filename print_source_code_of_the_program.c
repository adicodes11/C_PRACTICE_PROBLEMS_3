// Program to print the source code of that program itself

#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    char c;
    ptr = fopen(__FILE__, "r");

    while ((c = fgetc(ptr)) != EOF)
    {
        putchar(c);
    }

    return 0;
}