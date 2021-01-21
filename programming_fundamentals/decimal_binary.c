#include <stdio.h>

int main()
{
    int n;
    printf("enter the value: ");
    scanf("%i", &n);
    int ans = 0;
    int mul = 1;
    while (n != 0)
    {
        int rem = n % 2;
        ans = ans + (rem * mul);
        n = n / 2;
        mul = mul * 10;
    }
    printf("%d", ans);
    return 0;
}