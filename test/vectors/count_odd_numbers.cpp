// give an array, count the number of odd elements of the array!!
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans = 0;
    vector<int> arr({1, 2, 3, 4, 5, 6, 7, 8, 9});
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            ans++ ;
        }
    }
    cout<<ans<<endl;
    return 0;
}