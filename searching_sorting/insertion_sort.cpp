#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 52, 452, 52351, 35, 3256246, 426246, 246};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < size; i++)
    {

        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}
