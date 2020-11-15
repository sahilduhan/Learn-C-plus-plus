#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0;
    int arr[]{1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    float mean=0;
    if (n != 0)
    {
        mean = sum / n;
    }
    cout << mean << endl;

    return 0;
}