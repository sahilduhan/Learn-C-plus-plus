#include <bits/stdc++.h>
using namespace std;
long long int factorial(int num)
{
    if (num == 0)
        return 1;
    return num * factorial(num - 1);
}

int main()
{
    cout<<factorial(10);
    

    return 0;
}