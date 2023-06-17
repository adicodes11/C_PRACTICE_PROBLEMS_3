// Program to verify password requirements

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int password_validator(char str[])
{
    int slen = strlen(str);
    int uprcase_count = 0, lwrcase_count = 0, digit_count = 0, symbol_count = 0;

    if (slen < 8)
    {
        return 0;
    }
    for (int i = 0; i < slen; i++)
    {
        if (isupper(str[i]))
            uprcase_count++;
        else if (islower(str[i]))
            lwrcase_count++;
        else if (isdigit(str[i]))
            digit_count++;
        else if (ispunct(str[i]))
            symbol_count++;
    }
    if (lwrcase_count > 0 && uprcase_count > 0 && digit_count > 0 && symbol_count > 0)
        return 1;
    else
        return 0;
}

int main()
{
    char pass[20];
    try : 
    printf("Enter password: ");
    scanf("%s", pass);

    int validation = password_validator(pass);
    if (validation == 1)
    {
        printf("The entered password is valid\n");
    }
    else if (validation == 0)
    {
        printf("The entered password is invalid please try again\n");
        goto try;
    }

    return 0;
}