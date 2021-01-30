// int y[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};
// int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};

// I need sum!!

// use vector instead of arr

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};
    int arr2[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};
    //for array 1
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)

        {
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}