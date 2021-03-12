#include <bits/stdc++.h>
using namespace std;
void is_prime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "non prime" << endl;
            break;
        }
        else
        {
            cout << " prime " << endl;
        }
    }
}
int main()
{
    int num_1;
    cout << " enter the num to be checked " << endl;
    cin >> num_1;
    is_prime(num_1);

    return 0;
}