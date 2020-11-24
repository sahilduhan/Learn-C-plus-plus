#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 1025;
    int *p;
    char c;
    p = &a;
    cout << sizeof(int) << endl
         << &p<<endl<<(*p+1) << endl;
    cout << sizeof(char) << endl;

    return 0;
}