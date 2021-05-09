#include <bits/stdc++.h>
using namespace std;
void binary_search(int *array, int size, int key)
{
    int start = 0;
    int end = size;
    while (start <= end)
    {

        int middle = (start + end) / 2;
        if (array[middle] == key)
        {
            cout << " found at middle " << endl;
        }
        else if (array[middle] > key)
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
    }
    cout << " not found " << endl;
}
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int key = 2;
    binary_search(array, size, key);

    return 0;
}