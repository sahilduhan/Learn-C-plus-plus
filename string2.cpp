#include <bits/stdc++.h>
using namespace std;


int main()
{
    string name = "sachin duhan";
    cout << name << endl;
    cout << name[2] << endl;

    // methods
    cout << name.length() << endl;
    name.pop_back();
    name.push_back('a');

    for (int i = name.length()-1; i >= 0; i--)
        cout << name[i];
    
    return 0;
}