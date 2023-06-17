//  Program to find the perimeter of a rectangle using command line arguments

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float length, breadth;
    length = atof(argv[1]);
    breadth = atof(argv[2]);

    if (argc != 3)
    {
        printf("Invalid number of arguments...\n");
        exit(0);
    }

    printf("The perimeter of the rectangle is: %.2f\n", 2 * (length + breadth));
}