#include <bits/stdc++.h>
using namespace std;
void linear_search(int arr[], int size, int key)
{
    for (int i = 0; i <= size; i++)
    {
        if (key == arr[i])
        {
            cout << i;
            break;
        }
        else
        {
            cout << " not found " << endl;
        }
    }
}

int main()
{
    int size_arr, num;
    int array[] = {1, 2, 3, 4, 56, 7, 80, 9, 900, 121};
    size_arr = sizeof(array) / sizeof(array[0]);
    linear_search(array, size_arr, 4);
    return 0;
}