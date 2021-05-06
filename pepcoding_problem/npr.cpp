#include <bits/stdc++.h>
using namespace std;
int factorial(int num)
{
    for (int i = 1; i <= num; i++)
    {
        num = num * i;
    }
    return num;
}
int main()
{
    int num = 4;
    int r = 2;
    int result = 0;
    result = factorial(num) / factorial(num - r);
    cout << result << endl;
    return 0;
}