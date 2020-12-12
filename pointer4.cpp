#include <bits/stdc++.h>
using namespace std;
int main()
{

    double high_temp{100.77};
    double low_temp{55};
    double *temp_ptr{&high_temp};
    temp_ptr=&low_temp;
    cout << "the temp is=" << *temp_ptr << endl;
    return 0;
}
