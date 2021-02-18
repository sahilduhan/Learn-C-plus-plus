#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 100;
    int *p = &a; // p is a pointer to an integer which points towards the adress of a
    cout << " the adress of a is " << p << endl;
    cout << " the adress of the next is " << p + 1 << endl;

    return 0;
}