#include<stdio.h>

int main()
{
    int a = 13;
    float b = 40.13;

    printf("%f\n",(float)a);
    printf("%d\n",(int)b);
    printf("%d\n",54/5);    // %f use krne pr bhi 10 nhi ... blki answerhi galat de dega yeh
    printf("%f\n",(float)54/5);

    return 0;
}