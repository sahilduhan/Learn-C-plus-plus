#include <bits/stdc++.h>
using namespace std;

int factorial(int x)
{
    int rv = 1;
    for (int i = 1; i <= x; i++)
    {
        rv *= i;
    }
    return rv;
}

int main()
{

    cout << factorial(5);
    return 0;
}
