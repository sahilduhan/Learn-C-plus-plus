#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << " enter the num " << endl;
    cin >> num;

    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int size = sizeof(arr) / sizeof(arr[0]);
    {
        int i, j;
        for (i = 0; i < size; i++)
        {
            for (j = i + 1; i < size; i++)
            {
                int current_sum = 0;
                current_sum = arr[i] + arr[j];
                if (current_sum == num)
                {
                    cout << i << " " << j << endl;
                }
            }
        }
    }
    return 0;
}