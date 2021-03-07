#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum=0;
    cout << " enter the value upto which the sum is to be evaluated" << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;

    return 0;
}