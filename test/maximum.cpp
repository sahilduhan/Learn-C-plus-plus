#include <bits/stdc++.h>
using namespace std;
int main()
{
    int max = 0;
    int arr[]{ 7,9,10,8,0,10,7,20,15, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max)
        max = arr[i];
    }
    cout << max << endl;
    return 0;
}