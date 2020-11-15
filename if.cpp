#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num{};
    int min(10);
    int max(100);
    cout << "enter the value" << endl;
    cin >> num;
    if (num >= min)
        cout << "the value is greater than min" << endl;

    if (num <= max)
        cout << "values is in limits" << endl;

    return 0;
}