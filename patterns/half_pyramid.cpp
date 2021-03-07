#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << " enter the value of num" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)

        {
            if (j <= num - i)
            {
                cout << "\t";
            }
            else
            {
                cout << "*\t";
            }
        }
        cout << endl;
    }
    return 0;
}
