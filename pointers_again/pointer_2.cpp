#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10001;
    int *p = &a;
    cout << " the value " << *p << " is at adress " << p << endl;
    char *c;
    c = (char *)p;
    cout << " the adress at another value is " << c << " and the value is " << *c;

    return 0;
}