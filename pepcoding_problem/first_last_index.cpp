#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 30, 30, 40, 50, 60, 60, 70, 70, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;
    int data = 30;
    int first_index = -1;
    while (start <= end)
    {
        int middle = (start + end) / 2;
        if (data < arr[middle])
        {
            end = middle - 1;
        }
        else if (data > arr[middle])
        {
            start = middle + 1;
        }
        else
        {
            first_index = middle;
            end = middle - 1;
        }
    }
    cout << first_index << endl;
    int last_index = -1;
    while (start <= end)
    {
        int middle = (start + end) / 2;
        if (data < arr[middle])
        {
            end = middle - 1;
        }
        else if (data > arr[middle])
        {
            start = middle + 1;
        }
        else
        {
            last_index = middle;
            start = middle + 1;
        }
    }
    cout << first_index << endl;
    return 0;
}