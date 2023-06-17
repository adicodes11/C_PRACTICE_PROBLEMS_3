// Program to trim trailing whitespaces from a string

#include <stdio.h>
#include <string.h>

void trailing_whitespace_trimmer(char str[])
{
    int slen = strlen(str), count = 0, temp = slen;
    while (str[slen - 1] == ' ' || str[slen - 1] == '\t' || str[slen - 1] == '\v' || str[slen - 1] == '\n')
    {
        count++;
        slen--;
    }
    str[temp - count] = '\0';
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    printf("%saaaaa\n", str);

    trailing_whitespace_trimmer(str);
    printf("%saaaaa\n", str);

    return 0;
}