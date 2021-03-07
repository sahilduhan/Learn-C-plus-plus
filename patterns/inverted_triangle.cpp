#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << " enter the value of num" << endl;
    cin >> num;
    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*\t";
        }
        cout << endl;
    }

    return 0;
}