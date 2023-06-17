// Program to reverse a string

#include <stdio.h>

void reverser(char str[])
{
    int length = 0, i = 0;
    char temp;
    while (str[i] != '\0')
    {
        length++;
        i++;
    }

    for (int i = 0; i < length; i++)
    {
        temp = str[i];
        str[i] = str[length - 1];
        str[length - 1] = temp;
        length--;
    }
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    printf("The original string is:\n");
    printf("%s\n", str);

    reverser(str);
    printf("The reversed string is:\n");
    printf("%s\n", str);

    return 0;
}