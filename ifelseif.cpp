#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks{};
    cout << "marks" << endl;
    cin >> marks;
    if (marks >= 90)
        cout << "goood" << endl;
    else if (marks < 90)
        cout << "better luck nxt tym" << endl;
    else if (marks < 80)
        cout << "doob ke marr ja" << endl;

    else
    {
        cout << "mar ja jaldi kar" << endl;
    }
    return 0;
}