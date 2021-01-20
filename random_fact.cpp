#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nf = 5, n = 1, rf = 2, r = 1;
    for (int i = 1; i <= nf; i++)
    {
        n *= i;
    }
    for (int i = 1; i <= nf - r; i++)
    {
        r *= i;
    }
    int n_fact = n / r;
    cout << "the factorial is " << n_fact << endl;

    return 0;
}