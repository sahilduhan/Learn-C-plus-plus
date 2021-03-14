#include <bits/stdc++.h>
using namespace std;
bool Check(int num_1, int num_2, int num_3)
{
    int x, y, z;
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (b == y)
    {
        a = x;
        c = z;
    }
    else
    {

        b = x;
        c = y;
    }
    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int num_1, num_2, num_3;
    cout << " enter the 3 nums" << endl;
    cin >> num_1 >> num_2 >> num_3;
    if (Check(num_1, num_2, num_3))
    {
        cout << " pythagorus triplet " << endl;
    }
    else
    {
        cout << " not a pythagorus triplet " << endl;
    }

    return 0;
}