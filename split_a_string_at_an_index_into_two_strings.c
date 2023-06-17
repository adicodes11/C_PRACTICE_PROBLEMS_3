// Program to spilt a string at an index into two strings

#include <stdio.h>
#include <string.h>

void string_splitter(char str[], char split_str1[], char split_str2[], int index)
{
    int slen = strlen(str);
    index--;
    int split_str1_slen = index;
    int split_str2_slen = slen - index + 1;

    for (int i = 0; i < split_str1_slen; i++)
    {
        split_str1[i] = str[i];
    }
    split_str1[split_str1_slen] = '\0';
    for (int i = 0; i < split_str2_slen; i++)
    {
        split_str2[i] = str[index + i];
    }
    split_str2[split_str2_slen] = '\0';
}

int main()
{
    char str[100], split_str1[100], split_str2[100], index;
    printf("Enter the string: ");
    gets(str);

    printf("Enter the split index: ");
    scanf("%d", &index);

    string_splitter(str, split_str1, split_str2, index);
    printf("split_str1: %s\n", split_str1);
    printf("split_str2: %s\n", split_str2);

    return 0;
}