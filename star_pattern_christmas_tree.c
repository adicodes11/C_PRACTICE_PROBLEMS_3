// Program to print a christmas tree
// Check out the problem statement in video

#include <stdio.h>

int main()
{
    int height;
    printf("Enter the tree height: ");
    scanf("%d", &height);
    printf("\n");

    for (int i = 1; i <= height; i++)
    {
        int star_count = (i * 2) - 1; // equation according to the prblm statement for the lowest level star number
        int space_count = height - i + 1;

        for (int j = 0; j < space_count; j++)
            printf(" ");

        for (int j = 0; j < star_count; j++)
            printf("*");

        printf("\n");

        if(i==height)
        {
            for(int k=0;k<3;k++)
            {
                for (int j = 0; j < height; j++)
                    printf(" ");

                printf("*\n");
            }
        }
    }

    return 0;
}