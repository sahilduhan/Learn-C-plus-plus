#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cout << " enter the rows" << endl;
    cin >> row;
    cout << " enter the coloum" << endl;
    cin >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row || j == 1 || j == col)
            {
                cout << "*\t";
            }
            else
            {
                cout << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}