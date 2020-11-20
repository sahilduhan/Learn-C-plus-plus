#include <bits/stdc++.h>
using namespace std;
int product(int a, int b)
{
    int prod = a * b;
    return prod;
}
int factorial(int num)
{

    int fact = 1;
    for (int i=1;i<=num;i++)
    {
        fact = fact * i;
    }
        return fact;
}

int main()
{

    cout << "product is -" << product(5, 10) <<" " <<factorial(5) << endl;
    return 0;
}
