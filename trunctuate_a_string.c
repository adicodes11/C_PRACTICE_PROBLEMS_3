// Program to trunctuate a string

#include <stdio.h>
#include <string.h>

void trunctuate_string(char str[], int n)
{
    str[n] = '\0';
}

int main()
{
    char str[100];
    int n;
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';
    printf("Enter the trunctuate position: ");
    scanf("%d", &n);

    trunctuate_string(str, n);
    printf("After the trunctuation string becomes: %s\n", str);

    return 0;
}