#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1{"raju"};
    string s2{"raman"};
    string s3{"harami"};
    string *p1{&s1};
    string *p2{&s1};
    string *p3{&s2};
    cout << boolalpha;
    cout << "p1"
         << "=="
         << "p2"
         << ":" << (p1 == p2) << endl;

    cout << "p1"
         << "=="
         << "p3"
         << ":" << (p1 == p3) << endl;

    return 0;
}