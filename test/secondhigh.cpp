

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int _max = INT_MIN, second = -1, diff = INT_MAX;
    vector<int> arr({1, 2, 3, 4, 5, 6, 7, 8, 9});
    int n = arr.size();
    for (int i = 0; i < n; i++)
        _max = max(arr[i], _max);

    for (int j = 0; j < n; j++)
    {
        if (arr[j] < _max && diff > _max - arr[j])
        // 1. _max should not be counted! 
        // last difference was greater than the current differnce 
        {
            diff = _max - arr[j]; // storing the minimum value of the difference!!
            second = arr[j]; // storing the value
        }
    }
    cout << "second high value - " << second << endl;
    return 0;
}