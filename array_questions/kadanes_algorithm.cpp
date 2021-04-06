#include <bits/stdc++.h>
using namespace std;
int main()
{
    int current_sum = 0;
    int maxsum = INT_MIN;
    int arr[] = {-2, -5, 6, -2, 1, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        current_sum += arr[i];
        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }
    cout << max(current_sum, maxsum) << " ";

    return 0;
}