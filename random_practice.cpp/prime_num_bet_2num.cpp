#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num_1, num_2;
    cout << " enter the value between the prime num is to be calculated" << endl;
    cin >> num_1 >> num_2;
    for (int num = num_1; num <= num_2; num++)
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                cout << " non  prime" << endl;
                break;
            }
            if (num == 1)
            {
                cout << " the num is" << num << endl;
            }
        }

    return 0;
}