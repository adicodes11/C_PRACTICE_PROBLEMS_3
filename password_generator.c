// Program to generate password

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


void password_generator(char passkeys[],char str[])
{
    int slen = strlen(passkeys), size,arr[slen];

    srand(time(NULL));
    size = (rand() % 8) + 8;    // random size of the password to be genereated
    for(int i=0;i<slen;i++)
    {
        arr[i]= rand() % slen;
    }

    for(int i=0;i<size;i++)
    {
        str[i]=passkeys[arr[i]];
    }
    str[size]='\0';
}

int main()
{
    char str[20];
    char passkeys[400]="AaBb0@CcDd_1111_EeFf.2222.GgHh.3333.IiJj_4444_KkLl5555@MmNn6666OoPp_7777_QqRr.8888.SsTt.9999.UuVv.WwXx@YyZz_AaBb@0CcDd_1111_EeFf.2222.GgHh.3333.IiJj_4444_KkLl5555MmNn@6666@OoPp_7777_QqRr.8888.SsTt.9999.UuVv.WwXx@YyZz_" ; //perfectly ordered 

    password_generator(passkeys,str);
    printf("Have a look at is this password suggestion: %s\n",str);


    return 0;
}