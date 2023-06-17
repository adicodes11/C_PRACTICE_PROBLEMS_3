// Program to trim leading whitespaces from a string

#include <stdio.h>
#include <string.h>

void leading_whitespace_trimmer(char str[])
{
    int slen = strlen(str);
    while (str[0] == ' ' || str[0] == '\t' || str[0] == '\v' || str[0] == '\n')
    {
        for (int j = 0; j < slen; j++)
        {
            str[j] = str[j + 1];
        }
    }
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    leading_whitespace_trimmer(str);
    puts(str);

    return 0;
}