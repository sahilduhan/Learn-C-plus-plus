#include <bits/stdc++.h>
using namespace std;

void double_data(int *int_value)
{
    *int_value *= 2;
}

int main()
{
    int value{100};
    int *int_ptr{nullptr};
    cout << "value is-" << value << endl;
    double_data(&value);
    cout << "changed value is-" << value << endl;

    return 0;
}
