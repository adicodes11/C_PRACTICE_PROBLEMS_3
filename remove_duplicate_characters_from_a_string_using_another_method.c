// Program to remove duplicate characters from a string using another method
// My thought method 😎

#include <stdio.h>
#include <string.h>

void remove_duplicates(char *str)
{
    int slen = strlen(str);

    for (int i = 0; i < slen; i++)
    {
        for (int j = i + 1; j < slen; j++)
        {
            if ((str[i] ^ str[j]) == 0)
            {
                for(int k=j;k<slen;k++)
                {
                    str[k]=str[k+1];
                }
                i--;
                slen--;
            }
        }
    }
}

int main()
{
    char str[100] = "aaaaaabbbbbbaaaaacccccddddeeee";

    remove_duplicates(str);
    printf("String after duplictes removal: %s\n", str);

    return 0;
}