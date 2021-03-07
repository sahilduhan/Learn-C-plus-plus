#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cout << " enter the rows";
    cin >> row;
    cout << " enter the coloums";
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "*\t";
        }
        cout << endl;
    }

    return 0;
}