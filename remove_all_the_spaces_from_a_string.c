// Program to remove all space characters in a string

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void space_remover(char str[])
{
    int slen = strlen(str);

    for(int i=0;i<slen;i++)
    {
        if(isspace(str[i]))
        {
            for(int j=i;j<slen;j++)
            {
                str[j]=str[j+1];
            }
            slen--;
            i--;
        }
    }
    str[slen+1]='\0';
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    printf("Before: %s\n",str);

    space_remover(str);

    printf("After: %s\n",str);

    return 0;
}