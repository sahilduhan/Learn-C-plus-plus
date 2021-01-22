#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100] = {1, 2, 3, 4, 647, 55, 6, 6, 7, 7};
    int i, x, pos;
    //print the array
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    //inserting an element in the array
    cout << "enter the element you want to enter the array:" << endl;
    cin >> x;
    cout << "enter the positon of the element:" << endl;
    cin >> pos;
    for (int i = 10; i >= pos - 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = x;
    for (int i = 0; i < 11; i++)
    {
        cout << "the new array is: " << arr[100] << endl;
    }
    return 0;
}