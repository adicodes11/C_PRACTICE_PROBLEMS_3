// Program to split a string at specific seperators

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char **split_string(char *str, char *seperator, int *count)
{
    int slen = strlen(str);

    for (int i = 0; i < slen - 1; i++)
    {
        if (strchr(seperator, str[i]) == NULL && strchr(seperator, str[i + 1]) != NULL)
        {
            (*count)++;
        }
    }

    int k = 0, j = 0;
    char **strings = malloc((*count) * sizeof(char *));
    for (int i = 0; i < slen; i++)
    {
        if (strchr(seperator, str[i]) != NULL)
        {
            continue;
        }
        else
        {
            strings[k] = malloc(j + 1);
            while (strchr(seperator, str[i]) == NULL)
            {

                strings[k][j] = str[i];
                i++;
                j++;
            }
            strings[k][j] = '\0';
            j = 0;
            k++;
        }
    }

    return strings;
}

int main()
{
    char str[100] = "To be or, to not be is a completely: different question.";
    char seperator[10] = {' ', ',', ':', '.', ';', '\0'};
    int count = 0;

    char **strings = split_string(str, seperator, &count);

    for (int i = 0; i < count; i++)
    {
        printf("%s\n", strings[i]);
    }

    for (int i = 0; i < count; i++)
    {
        free(strings[i]);
    }
    free(strings);

    return 0;
}