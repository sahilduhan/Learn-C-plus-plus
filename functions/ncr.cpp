#include <bits/stdc++.h>
using namespace std;
int fact(int num)
{
    int factorial = 1;
    for (int i = 2; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int num, r;
    cout << " enter the num value " << endl;
    cin >> num;
    cout << " enter the value of r" << endl;
    cin >> r;

    int ans = fact(num) / (fact(r) * fact(num - r));
    cout << ans;
    return 0;
}