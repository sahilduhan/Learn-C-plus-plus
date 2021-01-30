#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, coloum;
    cout << " enter the row " << endl;
    cin >> row;
    cout << " enter the coloum " << endl;
    cin >> coloum;
    int arr[row][coloum];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)

        {
            cout << " enter the elements " << endl;
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}