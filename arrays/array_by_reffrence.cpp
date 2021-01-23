#include <bits/stdc++.h>
using namespace std;
void pass_by_reffernce1(int &num)
{
    num = 1000;
}
void pass_by_reffernce2(string &s)
{
    s = "changed";
}
void pass_by_reffernce3(string &v)
{
    v = "cahnged";
}

int main()
{
    int num = 10;
    string name{"frank"};
    cout << "the value of num is before passing by reffernce " << num << endl;
    pass_by_reffernce1(num);
    cout << "the number after refferncing is-" << num << endl;

    cout << "the value of name is before passing by reffernce " << name << endl;
    pass_by_reffernce3(name);
    cout << "the number after refferncing is-" << name << endl;
    return 0;
}