// Program to add two numbers

#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);

    int add = sum(a,b);
    printf("The sum of %d and %d is: %d\n",a,b,add);

    return 0;
}