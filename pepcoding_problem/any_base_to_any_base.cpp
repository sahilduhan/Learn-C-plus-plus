#include <bits/stdc++.h>
using namespace std;
int base_to_decimal(int num, int base)
{
    int p = 1;
    int rv = 0;
    while (num > 0)
    {
        int dig = num % 10;
        num = num / 10;
        rv += dig * p;
        p = p * 10;
    }

    return rv;
}
int decimal_to_base(int num, int base)
{
    int rv = 0;
    int p = 1;
    while (num > 0)
    {
        int dig = num % base;
        num = num / base;
        rv += dig * p;
        p = p * 10;
    }
    return rv;
}
int main()
{

    return 0;
}