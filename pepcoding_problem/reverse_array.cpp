#include <bits/stdc++.h>
using namespace std;
void reverse(int *array, int size)
{

    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int i = start;
        int j = end;
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    reverse(array, size);
    return 0;
}