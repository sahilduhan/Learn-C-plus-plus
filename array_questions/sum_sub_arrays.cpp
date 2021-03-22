#include <bits/stdc++.h>
using namespace std;
int main()
{
    int current = 0;
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        current = 0;

        for (int j = i; j < size; j++)
        {
            current += arr[j];
            cout << current << " ";
        }
    }
    return 0;
}