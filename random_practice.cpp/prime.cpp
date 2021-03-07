#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << " enter the num to check" << endl;
    cin >> num;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << " non prime" << endl;
            break;
        }
        if (i == num)
        {
            cout << " prime" << endl;
        }
    }
    return 0;
}