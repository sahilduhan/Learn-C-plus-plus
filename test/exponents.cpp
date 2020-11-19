#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a = 2, n = 10,x=1;
    cout << "the actual answer is - " << pow(a,n) << endl;
    while (n > 0)
    {
        x *= a;
        n--;
    }
    cout << "value is - " << x << endl;
    return 0;
}