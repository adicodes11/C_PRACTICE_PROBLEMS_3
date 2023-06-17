// Program to remove all vowels from a string

#include <stdio.h>
#include<string.h>

void vowel_remover(char str[])
{
    int count_vowels = 0, count_consonants = 0;
    int slen = strlen(str);
    for(int i=0;i<slen;i++)
    {
        switch(str[i])  // using fall through of the switch statement
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                {
                    for(int j = i;j<slen;j++)
                    {
                        str[j]=str[j+1];
                    }
                    i--;
                }
        }
    }
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    vowel_remover(str);
    puts(str);

    return 0;
}