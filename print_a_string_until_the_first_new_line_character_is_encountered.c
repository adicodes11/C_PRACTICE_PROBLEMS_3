// Program to print a string until the first new line character isn't  encountered

#include<stdio.h>

void string_printer(char str[])
{
    int i = 0;
    
    while(str[i]!='\n'&& str[i]!='\0')
    {
        putchar(str[i]);
        i++;
    }
}

int main()
{
    char str[100] = "Hello my name is Aditya Chikte.\nI am a B-tech CSE student.";

    string_printer(str);

    return 0;
}