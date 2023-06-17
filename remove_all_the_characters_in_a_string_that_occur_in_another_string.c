// Program to remove all the characters in a string that occur in another string

#include <stdio.h>
#include <string.h>

void remove_matching_chars(char str1[], char str2[])
{
    int slen1 = strlen(str1);
    int slen2 = strlen(str2);

    for (int i = 0; i < slen2; i++)
    {
        for (int j = 0; j < slen1; j++)
        {
            if (str2[i] == str1[j])
            {
                for (int k = j; k < slen1 - 1; k++)
                {
                    str1[k] = str1[k + 1];
                }
                slen1--;
                i--;
            }
        }
    }
    str1[slen1] = '\0';
}

int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    fflush(stdin);
    printf("Enter second string: ");
    gets(str2);

    remove_matching_chars(str1, str2);
    printf("String1 after removing chars: %s\n", str1);

    return 0;
}