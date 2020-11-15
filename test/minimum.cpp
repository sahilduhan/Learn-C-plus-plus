#include <bits/stdc++.h>
using namespace std;
int main()
{
    int min = INT_MAX;
    int arr[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }

    cout << min << endl;

    return 0;
}