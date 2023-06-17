// Program to perform string code validation

#include <stdio.h>
#include <string.h>
#include<ctype.h>

int vn_validator(char str[])
{
    int slen = strlen(str), flag = 0;

    if(isalpha(str[0]) && isalpha(str[1]) && isspace(str[2]) && isdigit(str[3]) &&
       isdigit(str[4]) && isspace(str[5]) && isalpha(str[6]) && isalpha(str[7]) &&
       isspace(str[8]) && isdigit(str[9]) && isdigit(str[10]) && isdigit(str[11]) &&
       isdigit(str[12]))
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    char str[14];
    printf("Enter the vehicle number: ");
    gets(str);

    int validation = vn_validator(str);
    if (validation == 1)
    {
        printf("\'%s\' is a valid vehicle number\n", str);
    }
    else
    {
        printf("%s is an invalid vehicle number\n", str);
    }

    return 0;
}