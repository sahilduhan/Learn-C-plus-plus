#include <bits/stdc++.h>
using namespace std;

double variance(int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	double mean = (double)sum / (double)n;

	double sqDiff = 0;
	for (int i = 0; i < n; i++)
		sqDiff += (a[i] - mean) * (a[i] - mean);
	return sqDiff / n;
}

double standardDeviation(int arr[], int n)
{
	return sqrt(variance(arr, n));
}

int main()
{
	int arr[] = {7, 9, 11, 12, 13, 16, 18, 20, 21, 22, 23, 23, 24, 25, 25, 27, 28, 30, 31, 31, 32, 33, 33, 33, 35, 36, 38, 39, 41, 42, 44, 45, 45, 46, 47, 49, 49, 52, 57, 66};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Variance: "
		 << variance(arr, n) << "\n";
	cout << "Standard Deviation: "
		 << standardDeviation(arr, n) << "\n";
	return 0;
}
