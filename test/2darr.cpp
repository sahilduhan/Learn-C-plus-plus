/*

find the sum of all elements in 2D array!!
print maximum and minimum element of 2D array
print the diagonal of an array
print diagnal sum of an array

*/

#include <bits/stdc++.h>
using namespace std;

int sum_of_all(vector<vector<int>> arr)
{
    int sum = 0;

    return sum;
}

int max_element(vector<vector<int>> arr)
{
    int _max = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > INT_MIN)
            arr[i] = _max;
    }

    return _max;
}

int main()
{
    vector<vector<int>> arr({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}});
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}