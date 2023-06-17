// Program to generate a random password

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

void random_password_generator(char password[], int length)
{
    srand(time(NULL) * getpid());
    char lower_alpha[27] = "abcdefghijklmnopqrstuvwxyz";
    char upper_alpha[27] = "ABCDEFGHIJKLMNOPQRSTUVXYZ";
    char digits[11] = "0123456789";
    char symbols[10] = "!@#$^&*_.";

    for (int i = 0; i < length; i++)
    {
        int chooser = rand() % 4;
        switch (chooser)
        {
        case 0:
            password[i] = lower_alpha[rand() % 26];
            break;
        case 1:
            password[i] = upper_alpha[rand() % 26];
            break;
        case 2:
            password[i] = digits[rand() % 10];
            break;
        case 3:
            password[i] = symbols[rand() % 9];
            break;
        }
    }
    password[length] = '\0';
}

int main()
{
    char password[20];
    int length;
    try_again:
    printf("Enter the password length: ");
    scanf("%d", &length);

    if(length >= 20)
    {
        printf("Password length out of limit...Try again\n");
        goto try_again;
    }
    random_password_generator(password, length);
    printf("Generated password: %s\n", password);

    return 0;
}