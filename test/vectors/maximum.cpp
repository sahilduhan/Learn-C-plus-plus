#include <bits/stdc++.h>
using namespace std;
int main()
{
    int _max = INT_MIN;
    vector<int> arr({-1, -2, -3, -4, -5, -6, -7, -8, -9});
    int n = arr.size();
    for (int i = 0; i < n; i++)
        _max = max(arr[i], _max);
    cout << _max << endl;
    return 0;
}