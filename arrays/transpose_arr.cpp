#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c = 4, r = 3;
    int arr[r][c] = {{1, 2, 3, 3}, {4, 5, 6, 6}, {7, 8, 9, 10}};
    int arr2[c][r];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr2[c][r] = arr[i][j];
            cout << arr2[c][r] << " ";
        }
        cout << endl;
    }
    return 0;
}