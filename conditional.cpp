#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num{};
    cout << "enter the number" << endl;
    cin >> num;
    cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;
    return 0;
}