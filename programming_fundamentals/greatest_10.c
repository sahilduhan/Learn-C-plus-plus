#include <stdio.h>
int main()
{

    int a, b, c, d, e, f, g, h, i, j;

    printf("enter the three numbers you want to comapare:\n");
    printf(" enter the first value:");
    scanf("%i", &a);
    printf("enter the second value:\n");
    scanf("%i", &b);
    printf("enter the third value:\n");
    scanf("%i", &c);
    printf(" enter the fourth value:");
    scanf("%i", &d);
    printf(" enter the fifth value:");
    scanf("%i", &e);
    printf(" enter the sixth value:");
    scanf("%i", &f);
    printf(" enter the seventh value:");
    scanf("%i", &g);
    printf(" enter the eight  value:");
    scanf("%i", &h);
    printf(" enter the ninth value:");
    scanf("%i", &i);
    printf(" enter the tenth value:");
    scanf("%i", &j);

    if (a > b && a > c && a > d && a > e && a > f && a > g && a > h && a > i && a > j)
    {
        printf("the higest number is:%d", a);
    }
    if (b > a && b > c && b > d && b > e && b > f && b > g && b > h && b > i && b > j)
    {
        printf("the highest value is:%d", b);
    }
    if (c > a && c > b && c > d && c > e && c > f && c > g && c > h && c > i && c > j)
    {
        printf("the highest number is:%d", c);
    }
    if (d > a && d > b && d > c && d > e && d > f && d > g && d > h && d > i && d > j)
    {
        printf("the highest number is:%d", d);
    }
    if (e > a && e > b && e > d && e > c && e > f && e > g && e > h && e > i && e > j)
    {
        printf("the highest number is:%d", e);
    }
    if (f > a && f > b && f > d && f > e && f > c && f > g && f > h && f > i && f > j)
    {
        printf("the highest number is:%d", f);
    }
    if (g > a && g > b && g > d && g > e && g > f && g > c && g > h && g > i && g > j)
    {
        printf("the highest number is:%d", g);
    }
    if (h > a && h > b && h > d && h > e && h > f && h > g && h > c && h > i && h > j)
    {
        printf("the highest number is:%d", h);
    }

    if (i > a && i > b && i > d && i > e && i > f && i > g && i > h && i > c && i > j)
    {
        printf("the highest number is:%d", i);
    }
    if (j > a && j > b && j > d && j > e && j > f && j > g && j > h && j > i && j > c)
    {
        printf("the highest number is:%d", j);
    }

    return 0;
}