// Program to remove all the occurrences of a character from a string

#include <stdio.h>
#include <string.h>

void character_remover(char str[], char remove)
{
    int slen = strlen(str);
    for (int i = 0; i < slen; i++)
    {
        if (str[i] == remove)
        {
            for (int j = i; j < slen; j++)
            {
                str[j] = str[j + 1];
            }
            i--; // this is the most important part in the code---> shifted character to be removed character hi hua toh
        }        // eg. good mein 2 'o' hai ..toh dono o ko remove ho issliye aisa kiya
    }            // else without i--; try krke dekhna smjh jaoge
}

int main()
{
    char str[100], remove;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the character to be removed: ");
    scanf("%c", &remove);

    character_remover(str, remove);
    printf("The string after character removal: %s\n", str);

    return 0;
}