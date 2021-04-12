// give a vector, find the index and min element of the vector
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int _min = INT_MAX, p = -1;
    vector<int> arr({1, 2, 3, 4, 5, 6, 7, 8, 9});
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < _min)
        {
            _min = arr[i];
            p = i;
        }
    }
    cout << _min << " - " << p << endl;
    return 0;
}