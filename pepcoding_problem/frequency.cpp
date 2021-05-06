#include <bits/stdc++.h>
using namespace std;
int freequency(int num, int d)
{
    int value = 0;
    while (num > 0)
    {
        int dig = num % 10;
        num = num / 10;

        if (dig == d)
        {
            value++;
        }
    }
    return value;
}
int main()
{
    long long int num = 112233446;
    int ans = 0;
    ans = freequency(num, 2);
    cout << ans << endl;

    return 0;
}