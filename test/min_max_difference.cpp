
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int _max = INT_MIN, _min = INT_MAX, diff;
    vector<int> arr({1, 2, 3, 4, 5, 6, 7, 8, 9});
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        _max = max(_max, arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        _min = min(_min, arr[j]);
    }
    
    diff = _max - _min;

    cout << "the max value is-" << _max << endl;
    cout << "the min value is-" << _min << endl;
    cout << "the min value is-" <<diff<< endl;

    return 0;
}