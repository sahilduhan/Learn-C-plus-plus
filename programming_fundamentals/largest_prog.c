#include <stdio.h>
int main()
{
    int a, b, c;

    printf("enter the three numbers you want to comapare:\n");
    printf(" enter the first value:");
    scanf("%i", &a);
    printf("enter the second value:\n");
    scanf("%i", &b);

    printf("enter the third value:\n");
    scanf("%i", &c);
    if (a > b && a > c)
    {
        printf("the higest number is:%d", a);
    }
    if (b > a && b > c)
    {
    printf("the highest value is:%d",b);
    }
    if (c > a && c > b)
    {
        printf("the highest number is:%d", c);
    }

    return 0;
}