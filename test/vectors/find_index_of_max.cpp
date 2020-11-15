/*
QUESTION - given a string of english alphabet lowercase letters, find the number of vowels

example  - 
string word = "sachinduhan";
print '4'
why? - 'a','i', 'u', 'a';

string word = "nslksssjl";
print '0';

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans = 0;
    string name = "sachinduhan";
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
            ans++;
    }
    cout << ans << endl;

    return 0;
}