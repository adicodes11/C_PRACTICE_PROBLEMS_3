// Program to reverse a word in a string

#include <stdio.h>
#include <string.h>

void reverse_word(char str[])
{
    int slen = strlen(str), wlen = 0, start = 0, end = 0, i = 0, j = 0, cc = 0;

    for (i; i < slen;)
    {
        start = i;
        j = i;

        // calculating word length
        while (str[j] != ' ' && str[j] != '\0')
        {
            wlen++;
            j++;
        }
        end = start + wlen - 1;
        cc = end + 2;

        // swap or reverse
        for (int k = 0; k < wlen; k++)
        {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            wlen--;
            start++;
            end--;
        }
        wlen = 0;
        i = cc ;
    }
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    puts(str);

    reverse_word(str);
    puts(str);

    return 0;
}