// Program to remove duplicate characters from a string

#include <stdio.h>
#include <string.h>

void duplicate_char_remover(char str[])
{
    int slen = strlen(str);

    for (int i = 0; i < slen; i++)
    {
        for (int j = i + 1; j < slen; j++)              
        {                                                 
            if (str[i] == str[j])
            {
                for (int k = j; k < slen; k++)
                {
                    str[k] = str[k + 1];
                }
                slen--;
                j--;
            }
        }
    }
    str[slen+1]='\0';

}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    duplicate_char_remover(str);
    printf("After removal string is :%s\n", str);

    return 0;
}