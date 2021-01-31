#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p = 3, q = 3, r = 3, s = 3;
    int A[p][q] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[r][s] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    if (q == r)
    {
        //array multiply
        int result[p][s] = {0};
        int sum = 0;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < s; j++)
            {
                for (int k = 0; k < r; k++)
                {
                    sum += A[i][k] * B[k][j];
                }
                cout << sum << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << " array multiplication is not possible " << endl;
    }

    return 0;
}