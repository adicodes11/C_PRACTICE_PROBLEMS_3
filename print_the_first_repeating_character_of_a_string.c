// Program to print the first repeating character of a string

#include <stdio.h>
#include <string.h>
#include<ctype.h>

char first_repeating_character_finder(char str[])
{
    int slen = strlen(str);

    for (int i = 0; i < slen; i++)
    {
        for (int j = 0; j < slen; j++)
        {
            if (str[i] == str[j] && i != j && str[i] != ' ')
            {
                return str[i];
            }
        }
    }
    return -1;
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    char c = first_repeating_character_finder(str);
    if(isalpha(c))
    {
        printf("First repeating character: %c\n",c);
    }

    return 0;
}