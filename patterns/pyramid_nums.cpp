#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << " enter the num value" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << "\t";
        }
        cout << endl;
    }

    return 0;
}