#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
    float x, sum = 1, t = 1;
    printf(" enter the value of x:\n");
    scanf("%f", &x);
    printf("enter the vlaue of n:\n");
    scanf("%i", &n);
    for (int i = 1; i <= n; i++)
    {
        t = (t * x) / i;
        sum = sum + t;
    }
    printf(" the value is: ", x, sum);
    return 0;
}