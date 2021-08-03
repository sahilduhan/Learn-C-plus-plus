#include <bits/stdc++.h>
using namespace std;
int main()
{

    int array[] = {12, 3, 234, 3, 52, 33, 41344, 3525, 4213, 1};
    int size_arr = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size_arr - 1; i++)
    {
        for (int j = i + 1; j < size_arr; j++)
        {
            if (array[j] < array[i])
            {

                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
        cout << array[i] << " ";
    }
    return 0;
}