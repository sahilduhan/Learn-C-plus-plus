#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 34, 5, 6, 7, 7, 7, 45};
    int maximum = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        int maxi = max(maximum, arr[i]);
        cout << maxi << " ";
    }
    return 0;
}