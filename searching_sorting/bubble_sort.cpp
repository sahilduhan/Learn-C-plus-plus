#include <bits/stdc++.h>
using namespace std;
int main()

{
    int counter = 1;
    int arr[] = {1, 2, 3, 45, 356, 4, 214, 3413, 12, 214};
    int size_arr = sizeof(arr) / sizeof(arr[0]);
    while (counter < size_arr)
    {
        for (int i = 1; i < size_arr - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    for (int k = 0; k < size_arr; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}
