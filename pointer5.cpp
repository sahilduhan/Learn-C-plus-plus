#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> arr{"sahil", "sachin", "jassi"};
    vector<string> *point_arr{nullptr};
    point_arr = &arr;
    cout << "the name of the first person is-" << (*point_arr).at(1) << endl;
    

    return 0;
}