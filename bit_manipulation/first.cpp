#include <bits/stdc++.h>
using namespace std;
int bit_test(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int set_bit(int n, int pos)
{
    return ((n | (1 << pos)));
}
int clear_bit(int n, int pos)
{
    return ;
}
int main()
{
    cout << bit_test(5, 2) << " ";
    cout << set_bit(5, 1);
    return 0;
}