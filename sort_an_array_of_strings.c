// Program to sort an array of strings

#include <stdio.h>
#include <string.h>

void sort_strings(char strings[10][100])
{
    char temp[100];

    for (int i = 0; i < 10; i++)
    {
        int j_min = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (strcmp(strings[j], strings[j_min]) < 0)
            {
                j_min = j;
            }
        }
        if (j_min != i)
        {
            strcpy(temp, strings[i]);
            strcpy(strings[i], strings[j_min]);
            strcpy(strings[j_min], temp);
        }
    }
}

int main()
{
    char strings[10][100] = {
        "mango",
        "pineapple",
        "banana",
        "strawberry",
        "melon",
        "kiwi",
        "coconut",
        "watermelon",
        "apple",
        "tomato"};

    sort_strings(strings);
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", strings[i]);
    }

    return 0;
}