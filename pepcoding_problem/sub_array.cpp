#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5, 7, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << array[k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}