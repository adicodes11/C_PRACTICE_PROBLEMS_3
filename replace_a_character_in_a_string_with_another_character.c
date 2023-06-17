// Program to replace a character in a string with another character

#include <stdio.h>
#include <string.h>

void character_replacer(char str[], char from, char to)
{
    int slen = strlen(str);
    for (int i = 0; i < slen; i++)
    {
        if (str[i] == from)
        {
            str[i] = to;
        }
    }
}

int main()
{
    char str[100],from,to;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the character to be replaced: ");
    scanf("%c",&from);
    printf("Enter the character to be replaced with: ");
    scanf(" %c",&to);

    character_replacer(str,from,to);
    puts(str);

    return 0;
}