// Program to sort three numbers

#include<stdio.h>

void sorter(int a,int b,int c)
{
    int lowest,middle,highest;

    if(a>=b && a>=c)    highest = a;
    if(b>=a && b>=c)    highest = b;
    if(c>=a && c>=b)    highest = c;

    if(a<=b && a<=c)    lowest = a;
    if(b<=a && b<=c)    lowest = b;
    if(c<=a && c<=b)    lowest = c;

    if(a<= highest && a>= lowest)  middle = a;
    if(b<= highest && b>= lowest)  middle = b;
    if(c<= highest && c>= lowest)  middle = c;

    printf("The ascending order is: %d %d %d\n",lowest,middle,highest);
    printf("The descending order is: %d %d %d\n",highest,middle,lowest);
}

int main()
{
    int num1,num2,num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    sorter(num1,num2,num3);

    return 0;
}