// Program to remove non alphabet characters from a string

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void non_alpha_remover(char str[])
{
    int slen = strlen(str);

    for(int i=0;i<slen;i++)
    {
        if(!isalpha(str[i]) && str[i]!=' ')
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

    non_alpha_remover(str);
    printf("After removal string: %s\n",str);

    return 0;
}