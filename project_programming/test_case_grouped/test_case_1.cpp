#include <bits/stdc++.h>
using namespace std;

// Function to find mean of grouped data.
float mean(float mid[], int freq[], int n)
{
    float sum = 0, freqSum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + mid[i] * freq[i];
        freqSum = freqSum + freq[i];
    }
    return sum / freqSum;
}

// deviation of grouped data.
float groupedSD(float lower_limit[],
                float upper_limit[],
                int freq[], int n)
{
    float mid[n], sum = 0, freqSum = 0, sd;
    for (int i = 0; i < n; i++)
    {
        mid[i] = (lower_limit[i] + upper_limit[i]) / 2;
        sum = sum + freq[i] * mid[i] * mid[i];
        freqSum = freqSum + freq[i];
    }

    // Formula to find standard deviation  of grouped data.
    sd = sqrt((sum - freqSum * mean(mid, freq, n) *
                         mean(mid, freq, n)) /
              (freqSum - 1));
    return sd;
}

int main()
{
    float arr[200] = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 95, 95, 95, 95, 95, 95, 5, 5, 5, 5, 5, 5};
    int freq[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i;
    for (i = 0; i < 200; i++)
    {
        if (arr[i] > 0 && arr[i] <= 10)
        {
            freq[0]++;
        }
        else if (arr[i] > 10 && arr[i] <= 20)
        {
            freq[1]++;
        }
        else if (arr[i] > 20 && arr[i] <= 30)
        {
            freq[2]++;
        }
        else if (arr[i] > 30 && arr[i] <= 40)
        {
            freq[3]++;
        }
        else if (arr[i] > 40 && arr[i] <= 50)
        {
            freq[4]++;
        }
        else if (arr[i] > 50 && arr[i] <= 60)
        {
            freq[5]++;
        }
        else if (arr[i] > 60 && arr[i] <= 70)
        {
            freq[6]++;
        }
        else if (arr[i] > 70 && arr[i] <= 80)
        {
            freq[7]++;
        }
        else if (arr[i] > 80 && arr[i] <= 90)
        {
            freq[8]++;
        }
        else if (arr[i] > 90 && arr[i] <= 100)
        {
            freq[9]++;
        }
    }

    // the lower limit of interval.
    float lower_limit[] = {0, 10, 20, 30, 40, 50, 60};

    // the upper limit of interval.
    float upper_limit[] = {10, 20, 30, 40, 50, 60, 70};

    int n = sizeof(lower_limit) / sizeof(lower_limit[0]);

    cout << "standard deviation " << groupedSD(lower_limit, upper_limit, freq, n) << endl;
    cout << "mean " << mean(arr, freq, n);
    return 0;
}