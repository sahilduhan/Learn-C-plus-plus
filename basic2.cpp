#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, l, x, y, c1, c2, z1, z2, sum;
    cout << "welcome to D-company, we provide the best hotel services" << endl;
    cout << "enter the no of small rooms you want to book for your holiday" << endl;
    cin >> x;
    cout << "enter the no of large rooms you want to book for the holiday" << endl;
    cin >> y;
    s = (x) * (2500);
    l = (3500) * (y);
    z1 = 0.06 * (s);
    z2 = 0.06 * (l);
    c1 = 500 * (x);
    c2 = 600 * (y);

    sum = z1 + z2 + l + s + c1 + c2;
    cout << "the room cost of large room is" << s << endl;
    cout << "the room cost of small room is" << l << endl;
    cout << "the tax of small room is" << z1 << endl;
    cout << "the tax cost of large room is" << z2 << endl;
    cout << "the carpet cleaning cost of small room is" << c1 << endl;
    cout << "the carpet cleaning cost of large room is" << c2 << endl;
    cout << "the total cost of your booking is" << sum << endl;

    return 0;
}