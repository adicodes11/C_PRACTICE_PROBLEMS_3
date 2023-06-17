// Program to technique to optionally activate debug output code

#include<stdio.h>

#define DEBUG   //if we include this statement then we can execute the DEBUG part

int main()
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int sum = 0;

    #ifdef DEBUG
    for(int i=0;i<10;i++)
    {
        printf("arr[%d]: %d\n",i,arr[i]);
    }
    #endif

    for(int i=0;i<10;i++)
    {
        sum += arr[i];
    }
    printf("Sum: %d\n",sum);
    // Not only once but we can use same DEBUG multiple times

    #ifdef DEBUG
    printf("Additional Statement\n");
    #endif



    return 0;
}