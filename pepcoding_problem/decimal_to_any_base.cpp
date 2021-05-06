#include <bits/stdc++.h>
using namespace std;
int get_value_base(int num, int base)
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
    int num = 634;
    int base = 8;
    int ans = 0;
    ans = get_value_base(num, base);
    cout << ans << endl;

    return 0;
}