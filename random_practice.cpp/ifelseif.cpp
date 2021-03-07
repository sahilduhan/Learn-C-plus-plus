#include <bits/stdc++.h>
using namespace std;
int main()
{
    int saving;
    cin >> saving;
    if (saving > 10000)
    {
        if (saving > 12000)
        {
            cout << " shopping" << endl;
        }
        else if (saving < 5000)
        {
            cout << " walk" << endl;
        }
        else
        {
            cout << " friends" << endl;
        }
    }
    return 0;
}