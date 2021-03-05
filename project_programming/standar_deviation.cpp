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

    // the lower limit of interval.
    float lower_limit[] = {50, 61, 71, 86, 96};

    // the upper limit of interval.
    float upper_limit[] = {60, 70, 85, 95, 100};
    int freq[] = {9, 7, 9, 12, 8};

    int n = sizeof(lower_limit) / sizeof(lower_limit[0]);

    cout << groupedSD(lower_limit, upper_limit, freq, n);
    return 0;
}