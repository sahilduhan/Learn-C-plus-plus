#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (n == 0)
    {
        cout << n << endl;
    }
    else
    {
        int sum = 1;
        for (int i = 0; i < n; i++)
        {
            sum *= arr[i];
            cout << sum << endl;
        }
        cout << "final answer is - " << sum << endl;
    }
    return 0;
}
