#include <bits/stdc++.h>
using namespace std;
int get_sum(int b, int num_1, int num_2)
{
    int rv = 0;
    int carry = 0;
    while (num_1 > 0 || num_2 > 0 || carry > 0)
    {
        int d1 = num_1 % 10;
        int d2 = num_2 % 10;
        num_1 = num_1 / 10;
        num_2 = num_2 / 10;
        int digit = num_1 + num_2 + carry;
    }

    return rv;
}
int main()
{

    return 0;
}