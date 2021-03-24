#include <bits/stdc++.h>
using namespace std;
int main()
{
    int maximum = INT_MIN;

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size_arr = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size_arr; i++)
    {
        for (int j = i; j < size_arr; j++)
        {
            int current = 0;
            for (int k = i; k <= j; k++)
            {
                current += arr[k];
            }
            maximum = max(maximum, current);
        }
    }
    cout << maximum << " ";
    return 0;
}