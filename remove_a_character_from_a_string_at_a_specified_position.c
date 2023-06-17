// Program to remove a character from a string at a specified position

#include <stdio.h>
#include <string.h>

void char_remover(char str[], int pos)
{
    int slen = strlen(str);
    for (int i = pos - 1; i < slen; i++)
    {
        str[i] = str[i + 1];
    }
}

int main()
{
    char str[100];
    int pos;
    printf("Enter the string: ");
    gets(str);
    printf("Before: %s\n", str);

    printf("Enter the position from where the character is to be removed: ");
    scanf("%d",&pos);
    
    char_remover(str, pos);
    printf("After: %s\n", str);

    return 0;
}