// Program to print the string in reverse

#include<stdio.h>

void array_reverse_printer(char str[])
{
    if(*str != '\0')
    {
        array_reverse_printer(str+1);
        printf("%c",*str);
    }
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    printf("String before reversing: %s\n",str);

    array_reverse_printer(str);

    return 0;
}