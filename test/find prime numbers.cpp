/*
    given a number n find all prime number till n
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    for (int number = 2; number <= n; number++)
    {
        bool isPrime = true;
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << number << endl;
    }
    return 0;
}
