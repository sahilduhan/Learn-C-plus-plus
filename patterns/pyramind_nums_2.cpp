#include <bits/stdc++.h>
using namespace std;
int main()
{

    int num, count = 1;
    cout << " enter the value of num" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << "\t";
            count++;
        }
        cout << endl;
    }

    return 0;
}