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
        p = p * base;
    }

    return rv;
}
int main()
{
    int num = 1172;
    int base = 8;
    int ans = 0;
    ans = base_to_decimal(num, base);
    cout << ans << endl;
    return 0;
}