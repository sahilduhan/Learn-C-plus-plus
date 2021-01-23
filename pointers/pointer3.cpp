#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 5;
    int *p;
    p = &x;
    *p = 6;
    int **q;
    q = &p;
    int ***r;
    r = &q;
    cout << *p << " " << &p <<" "<< p<<endl;
    cout << (*(*q)) << " " << &q <<" "<<q<< endl;
    cout << (*(*(*r))) << " " << &r <<" "<<r<< endl;
    ***r=10;
    cout<<***r<<" "<< endl;


    return 0;
}