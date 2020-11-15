#include <bits/stdc++.h>
using namespace std;
int main()
{

    int health{};
    cout << "health" << endl;
    cin >> health;
    if (health < 100)
    {
        health = 100;
        cout << health << endl;
    }
    else
    {
        cout << "you ar better" << endl;
    }

    return 0;
}