#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr_1[] = {1, 2, 3, 4, 5};
    int arr_2[] = {1, 2, 3, 4, 5, 5, 6};
    int sum_array[] = {0};
    int size_1 = sizeof(arr_1) / sizeof(arr_1[0]);
    int size_2 = sizeof(arr_2) / sizeof(arr_2[0]);
    int size_sum = sizeof(sum_array) / sizeof(sum_array[0]);
    int c = 0;
    int i = size_1 - 1;
    int j = size_2 - 1;
    int k = size_sum - 1;
    while (k >= 0)
    {

        int d = c;
        if (i >= 0)
        {
            d += arr_1[i];
        }
        if (j >= 0)
        {
            d += arr_2[j];
        }
        c = d / 10;
        d = d / 10;
        sum_array[k] = d;
        i--;
        j--;
        k--;
    }
    if (c != 0)

    {
        cout << c;
    }
    for (int val : sum_array)
    {
        cout << sum_array[val] << " ";
    }
    return 0;
}