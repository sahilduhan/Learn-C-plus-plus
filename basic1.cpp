#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, n, x, y, z, sum;
    cout << " hello welcome to the D-company official website" << endl;
    cout << "enter the no of hotel rooms you want to book" << endl;
    cin >> n;
    p = (3000) * n;
    z = (36) * n;
    x = (50) * n;
    sum = p + x + z;
    cout << "the room cost is" << p << endl;
    cout << "the tax applied is" << z << endl;
    cout << "the room cleaning fee is " << x << endl;
    cout << "the overall bill of the hotel room is" << sum << endl;
    return 0;
}