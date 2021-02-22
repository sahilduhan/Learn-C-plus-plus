#include <bits/stdc++.h>
using namespace std;
void Increment_the_num(int num)
{
    num = num + 1;
    cout << " the num after the incremntation is:" << &num << endl;
}
int main()
{

    int num = 1000;
    cout << " the num before the incrementation is:" << &num << endl;
    Increment_the_num(num);

    return 0;
}