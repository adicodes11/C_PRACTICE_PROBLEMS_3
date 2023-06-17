// Program to calculate the perimeter of the rectangle

#include<stdio.h>

float perimeter_rectangle(float length, float breadth)
{
    return 2*(length+breadth);
}

int main()
{
    float length,breadth;
    printf("Enter the length: ");
    scanf("%f",&length);
    printf("Enter the breadth: ");
    scanf("%f",&breadth);

    float per = perimeter_rectangle(length,breadth);
    printf("The perimeter of the rectangle is: %0.2f\n",per);

    return 0;
}