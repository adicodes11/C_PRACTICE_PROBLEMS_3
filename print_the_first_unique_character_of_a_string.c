// Porgram to print the first unique character in a string

#include <stdio.h>
#include <string.h>

int first_unique_char(char str[])
{
    int slen = strlen(str), flag;
    for (int i = 0; i < slen; i++)
    {
        flag = 0;
        for (int j = 0; j < slen; j++)
        {
            if (str[i] == str[j] && i != j)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    int uc = first_unique_char(str);
    if (uc > 0 && str[uc]!=' ')
        printf("The first unique character in the string is %c\n", str[uc]);
    else
        printf("No unique character found\n");

    return 0;
}
