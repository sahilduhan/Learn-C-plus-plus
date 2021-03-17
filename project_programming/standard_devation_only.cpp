#include <bits/stdc++.h>
using namespace std;

double variance(float a[], int n)
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

double standardDeviation(float arr[], int n)
{
	return sqrt(variance(arr, n));
}
double mean(float arr[], int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];

	return sum / n;
}

int main()
{
	float arr[] = {10, 10, 10, 10, 10, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 90, 90, 90, 90, 90, 95, 95, 95, 95, 95};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Standard Deviation: "
		 << standardDeviation(arr, n) << "\n";
	cout << " mean " << mean(arr, n);
	return 0;
}
