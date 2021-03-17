#include <bits/stdc++.h>
using namespace std;
int Binary_search(int array, int array_size, int key)
{
    int start = 0;
    int ending = array_size;

    while (start <= array_size)
    {
        int mid;
        mid = start + array_size / 2;
        if (array[&mid] == key)
        {
            return mid;
        }
        else if (array[&mid] > key)
        {
            ending = mid - 1;
        }
        else
        {
            ending = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 77, 8, 4, 4354, 346, 363};
    int size = sizeof(array) / sizeof(array[0]);
    int key = 4;
    cout << Binary_search(array[12], size, key);
    return 0;
}