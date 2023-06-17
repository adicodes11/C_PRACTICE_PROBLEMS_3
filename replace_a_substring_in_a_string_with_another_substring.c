// Program to replace all occurrences of a substring in a string with another substring

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void substring_replacer(char str[], char substr[], char to[])
{
    int slen = strlen(str);
    int sublen = strlen(substr);
    int tolen = strlen(to);
    char temp[200] = "";
    int i = 0, k = 0;

    while (i < slen)
    {
        if (strstr(&str[i], substr) == &str[i])
        {
            strcat(temp, to);
            i += sublen;
            k += tolen;
            slen += tolen;
        }
        else
        {
            temp[k] = str[i];
            k++;
            i++;
        }
    }
    strcpy(str, temp);
    str[strlen(str)] = '\0';
}

int main()
{
    char str[100] = "Aditya is a good girl.", substr[100] = "girl", to[100] = "boy";
    // printf("Enter the string: ");
    // fgets(str, 100, stdin);
    // str[strlen(str) - 1] = '\0';
    // printf("Enter the substring: ");
    // fgets(substr, 100, stdin);
    // substr[strlen(substr) - 1] = '\0';

    substring_replacer(str, substr, to);
    printf("String after replacement: %s\n", str);

    return 0;
}