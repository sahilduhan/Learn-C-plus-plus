#include <bits/stdc++.h>
using namespace std;
long long int fibonacci(int num)
{
    if (num <= 1)
        return num;
    return fibonacci(num - 1) + fibonacci(num - 2);
}
int main()
{

    cout << fibonacci(5);
}