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
	int arr[] = {};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Standard Deviation: "
		 << standardDeviation(arr, n) << "\n";
	return 0;
}
