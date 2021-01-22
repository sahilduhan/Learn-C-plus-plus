#include <stdio.h>
int main()
{
    int max = 0;
    int arr[] = {1, 2, 3, 45, 6, 77, 8};
    for (int i = 0; i <= 7; i++)
    {
        if (arr[i] > max)
            max=arr[i];
    }
    printf("the max value in the array is:%d", max);

    return 0;
}