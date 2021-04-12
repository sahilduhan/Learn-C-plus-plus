/*
QUESTION - given a number 'n' print the factorial of the number

n = 5
print 120
why? 5*4*3*2*1 = 120

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    long long int ans = 1;
    for (int i = n; i >= 1; i--)
        ans *= i;
    cout << ans << endl;
    return 0;
}