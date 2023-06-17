// Program to print unique elements of an array

#include <stdio.h>

void array_unique_element_finder(int arr[],int size)
{
    int flag ;

    printf("The unique elements are: ");
    for(int i = 0;i<size;i++)
    {
        flag = 0;
        for(int j =0;j<size;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                flag = 1;
            }
        }
        if(flag == 0)
        {
            printf("%d ",arr[i]);
        }
    }
}

int main()
{
    int arr[10], n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    array_unique_element_finder(arr,n);

    return 0;
}



// for(int j =0;j<size;j++)     // function mein yeh condition se bhi ho jayega 
// {
//     if(arr[i]==arr[j])
//     {
//         flag ++;
//     }
// }
// if(flag == 1)
// {
//     printf("%d ",arr[i]);
// }