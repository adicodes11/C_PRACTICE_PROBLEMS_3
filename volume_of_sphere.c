// Program to calculate the volume of the sphere

#include<stdio.h>

float sphere_volume(float radius)
{
    return (4/3.0)*3.141592*radius*radius*radius;
}

int main()
{
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f",&radius);

    float volume = sphere_volume(radius);
    printf("The volume of the sphere is: %.2f\n",volume);

    return 0;
}