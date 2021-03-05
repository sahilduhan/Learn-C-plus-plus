#include <bits/stdc++.h>
using namespace std;

double mean(float arr[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum / n;
}

double median(float arr[], int n)
{

    sort(arr, arr + n);
    if (n % 2 == 0)
        return (arr[n / 2 - 1] + arr[n / 2]) / 2;
    return arr[n / 2];
}

int main()
{
    int n;
    n = 40;
    float arr[40] = {7, 9, 11, 12, 13, 16, 18, 20, 21, 22, 23, 23, 24, 25, 25, 27, 28, 30, 31, 31, 32, 33, 33, 33, 35, 36, 38, 39, 41, 42, 44, 45, 45, 46, 47, 49, 49, 52, 57, 66};

    cout << "\nMean = " << mean(arr, n);
    cout << "\nMedian = " << median(arr, n);

    return 0;
}