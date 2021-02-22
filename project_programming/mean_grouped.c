#include <stdio.h>
#include <conio.h> //don't use this header

int intpart(float x)
{
    return x;
}

float decpart(float x)
{
    return x - intpart(x);
}

int roundoff(float x)
{
    if (decpart(x) >= 0.5)
    {
        return intpart(x) + 1; /*no space between int and part*/
    }
    else
    {
        return intpart(x);
    }
}

int main()
{
    int arx[100], n, a, b, hs, ls, range, cs;
    int arlow[11], arhigh[11];
    float arcm[11]; //may be you should declare arcm as an array of 11 floats

    /*had used colon instead of semicolon, why do you need to clear the console anyway*/
    printf("Enter number of scores: ");
    scanf("%i", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid no. of scores");
        getch(); //use getchar() instead
        return 1;
    }

    for (a = 0; a < n; a++)
    {
        printf("%i", a + 1);
        scanf("%i", &arx[a]);
    }

    hs = arx[0];
    for (a = 1; a < n; a++)
    {
        if (arx[a] > hs)
        {
            hs = arx[a];
        }
    }

    ls = arx[0];
    for (a = 1; a < n; a++)
    {
        if (arx[a] < ls)
        {
            ls = arx[a];
        }
    }
    range = hs - ls;
    cs = roundoff(range / 10.0); //missed semicolon

    a = 0;
    int x = ls; //x was used before its declaration
    while (x <= hs)
    {
        arlow[a] = x;
        arhigh[a] = x + cs - 1;
        arcm[a] = (arlow[a] + arhigh[a]) / 2.0; //here arcm is not an array*
        x = x + cs;
        a++;
    }
    a--;

    for (b = a; b >= 0; b--)
    {
        printf("\n%i\t%i\t%.2f", arlow[b], arhigh[b], arcm[b]); //typed prinf instead printf,arcm is not an array*
    }

    printf("\nhighest score: %i", hs);
    printf("\nlowest score: %i", ls);
    printf("\nrange: %i", range);
    printf("\nclass size: %i", cs);

    //some codes missing

    getch(); //used colon instead of semicolon
    return 0;
}