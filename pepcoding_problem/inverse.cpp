#include <bits/stdc++.h>
using namespace std;
int inverse_(int *arr, int size)
{
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        int v = arr[i];
        temp[v] = i;
    }
    return temp[size];
}
int main()
{
    int array[] = {4, 1, 0, 2, 3};
    int size = sizeof(array) / sizeof(array[0]);
    int ans = 0;
    ans = inverse_(array, size);
    cout << ans;
    return 0;
}