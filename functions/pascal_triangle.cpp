#include <bits/stdc++.h>
using namespace std;

int fact(int num)
{
    int factorial = 1;
    for (int i = 2; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{

    int num;
    cout << " enter the value of num " << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        }
        cout << endl;
    }
    return 0;
}