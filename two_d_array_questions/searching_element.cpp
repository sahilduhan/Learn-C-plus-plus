#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << " enter the num " << endl;
    cin >> num;

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    {

        for (int i = 0; i < 3; i++)
        {

            for (int j = 0; j < 3; j++)
            {
                if (arr[i][j] == num)
                {
                    cout << i << " " << j;
                }
            }
        }
    }

    return 0;
}