#include <bits/stdc++.h>
using namespace std;
int kadane(int arr[], int size_arr)
{
    int current_sum = 0;
    int maximum = INT_MIN;
    for (int i = 0; i < size_arr; i++)
    {
        current_sum += arr[i];
        if (current_sum < 1)
        {
            current_sum = 0;
        }
        maximum = max(current_sum, maximum);
    }
    return maximum;
}
int main()
{
    int wrap_sum = 0;
    int non_wrap_sum = 0;
    int arr[] = {4, -4, 6, -6, 10, -11, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int total_sum = 0;
    for (int i = 0; i < size; i++)
    {
        total_sum += arr[i];
        arr[i] = -arr[i];
    }
    wrap_sum = total_sum + kadane(arr, size);
    cout << max(wrap_sum, non_wrap_sum) << " ";

    return 0;
}