#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = sizeof(array) / sizeof(array[0]);
    int start = 0;
    int end = size - 1;
    int data = 55;
    int ceil = 0;
    int floor = 0;
    while (start <= end)
    {
        int middle = (start + end) / 2;
        if (data < array[middle])
        {
            end = middle - 1;
            ceil = array[middle];
        }
        else if (data > array[middle])
        {
            start = middle + 1;
            floor = array[middle];
        }
        else
        {
            ceil = array[middle];
            floor = array[middle];
        }
    }
    cout << ceil << " " << floor << endl;

    return 0;
}