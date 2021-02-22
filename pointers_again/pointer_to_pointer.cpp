#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    cout << *p << " is the value of p " << endl;
    cout << *q << " is the adress of q" << endl;
    cout << **q << endl;
    cout << ***r << endl;

    return 0;
}