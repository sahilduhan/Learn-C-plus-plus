#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int sum = 0;
    vector<int> arr({2147483646,3});
    int n=arr.size();
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum << endl;

    return 0;
}
