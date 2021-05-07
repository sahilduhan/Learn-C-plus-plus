#include <bits/stdc++.h>
using namespace std;
int maximum(int *array)
{
    int _max = 0;
    int _size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < _size; i++)
    {
        _max = max(_max, array[i]);
    }
    return _max;
}
int minimum(int *array)
{
    int _min = INT_MAX;
    int _size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < _size; i++)
    {
        _min = min(_min, array[i]);
    }
    return _min;
}
int main()
{
    int array[] = {2, 3, 4, 5, 6};
    cout << maximum(array) - minimum(array);

    return 0;
}