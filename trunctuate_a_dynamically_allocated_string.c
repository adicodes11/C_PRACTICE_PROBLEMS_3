// Program to trunctuate a dynamically allocated string

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void trunctuate(char string[], int n)
{
    string[n] = '\0';
    string = realloc(string, n + 1 * sizeof(char));
}

int main()
{
    char *string = malloc(100 * sizeof(char));
    int n;

    printf("Enter the string:");
    fgets(string, 100, stdin);
    string[strlen(string) - 1] = '\0';
    printf("Enter the position at which string is to be trunctuated: ");
    scanf("%d", &n);

    trunctuate(string, n);
    printf("The trunctuated string is: %s\n", string);
    free(string);

    return 0;
}