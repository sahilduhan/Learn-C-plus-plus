#include <bits/stdc++.h>
using namespace std;
int get_sum(int b, int num_1, int num_2)
{
    int p = 1;
    int rv = 0;
    int carry = 0;
    while (num_1 > 0 || num_2 > 0 || carry > 0)
    {
        int d1 = num_1 % 10;
        int d2 = num_2 % 10;
        num_1 = num_1 / 10;
        num_2 = num_2 / 10;
        int digit = d1 + d2 + carry;
        carry = digit / b;
        digit = digit % b;
        rv += digit * p;
        p = p * 10;
    }

    return rv;
}
int main()
{
    int num_1 = 1000;
    int num_2 = 634;
    int base = 8;
    int ans = get_sum(base, num_1, num_2);
    cout << ans << endl;
    return 0;
}