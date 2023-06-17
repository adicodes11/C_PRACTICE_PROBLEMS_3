// program to remove duplicate characters from a string using a linear time complexity method

#include <stdio.h>
#include <string.h>

void remove_duplicates(char *str)
{
    char buffer[100] ="";
    int slen = strlen(str);
    int j = 0;

    for (int i = 0; i < slen; i++)
    {
        if ((strchr(buffer, str[i])) == NULL)
        {
            buffer[j] = str[i];
            j++;
        }
    }
    buffer[strlen(buffer)] = '\0';
    strcpy(str, buffer);
}

int main()
{
    char str[100] = "aaaaabbbbbaaaaaccccccddddeeeee";

    remove_duplicates(str);
    printf("String after removal: %s\n", str);

    return 0;
}