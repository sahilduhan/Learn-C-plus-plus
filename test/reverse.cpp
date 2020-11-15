#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        //    cout << arr[i] << endl;
    } //

    for (int i = n - 1; i >= 0; i--)
        cout << arr[i] << endl;

    return 0;
}

