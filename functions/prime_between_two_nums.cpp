#include <bits/stdc++.h>
using namespace std;
bool prime_between_two_nums(int num)
{
    for (int i = 2; i < sqrt(num); i++)
        if (num % 2 == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
}

int main()
{
    int a, b;
    for (int i = a; i <= b; i++)
    {
        if (prime_between_two_nums(i))
            cout << i << endl;
    }

    return 0;
}