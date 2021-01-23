#include <bits/stdc++.h>
using namespace std;
int main()
{
    int first_[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *point_first{first_};
    while (*point_first != 9)
    {
        cout << "the array is-" << *point_first << endl;
        point_first++;
    }
    while (*point_first != 9)
    {
      //  cout << "the array consist of-" << point_first++ << endl;
        cout << "the array consist of-" << *point_first++ << endl;
    }
    return 0;
}