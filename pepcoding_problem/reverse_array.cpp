#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int i = start;
        int j = end;
        int temp = array[start];
        array[start] = array[j];
        array[j] = temp;
        start++;
        end--;
    }
    return 0;
}