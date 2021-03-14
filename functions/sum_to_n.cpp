#include <bits/stdc++.h>
using namespace std;
int Sum_to_nth(int num)
{
    int ans;
    for (int i = 0; i <= num; i++)
    {
        ans = ans + i;
    }
    return ans;
}
int main()
{
    int num;
    cout << " enter the num " << endl;
    cin >> num;
    cout << Sum_to_nth(num);

    return 0;
}