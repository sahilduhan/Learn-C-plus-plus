#include <bits/stdc++.h>
using namespace std;
int main()
{

    int *p;

    cout << "adress of p is-" << &p << endl;
    cout << "value of p is-" << p << endl;
    cout << "size of p is-" << sizeof p << endl;
    int *p1{nullptr};
    unsigned long long *p2{nullptr};
    vector<string> *p3{nullptr};
    string *p4{nullptr};

    cout << "adress of p2 is-" << &p2 << endl;
    cout << " storage of p2 is-" << sizeof p2 << endl;
    return 0;
}
