// Program for Vector Addition

#include<stdio.h>

void vector_addition(float v1[],float v2[],int size)
{
    float result[10];
    for(int i=0;i<size;i++)
    {
        result[i]=v1[i]+v2[i];
    }

    
    for(int i=0;i<size;i++)
    {
        if(i == 0)
        {
            printf("( ");
        }
        printf("%g ",v1[i]);
        if(i!=size-1)
        {
            printf(", ");
        }
        if(i == size-1)
        {
            printf(") + ");
        }
    }
    for(int i=0;i<size;i++)
    {
        if(i == 0)
        {
            printf("( ");
        }
        printf("%g ",v2[i]);
        if(i!=size-1)
        {
            printf(", ");
        }
        if(i == size-1)
        {
            printf(") = ");
        }
    }

    for(int i=0;i<size;i++)
    {
        if(i == 0)
        {
            printf("( ");
        }
        printf("%g ",result[i]);
        if(i!=size-1)
        {
            printf(", ");
        }
        if(i == size-1)
        {
            printf(")");
        }
    }
}

int main()
{
    float v1[10], v2[10];
    int n;
    printf("Enter the size of the vector: ");
    scanf("%d",&n);
    printf("Enter vector1: ");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&v1[i]);
    }
    printf("Enter vector2: ");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&v2[i]);
    }

    vector_addition(v1,v2,n);

    return 0;
}