// Program to calculate the volume of the cylinder

#include<stdio.h>

double volume_cylinder(double radius, double height)
{
    return 3.141592*radius*radius*height;
}

int main()
{
    double radius,height,vol;
    printf("Enter the radius of the cylinder: ");
    scanf("%lf",&radius);
    printf("Enter the height of the cylinder: ");
    scanf("%lf",&height);

    vol = volume_cylinder(radius,height);
    printf("The volume of the cylinder is: %.2lf\n",vol);

    return 0;
}