#include <stdio.h>
int main()
{
    int arr[] = {1, 42, 52, 6, 724, 688, 58858, 9, 5};
    int largest = 0, min = arr[0];

    for (int i = 0; i <= 9; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("the largest is:%d", largest);

    for (int i = 0; i < 9; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    printf("  the min value is:%d", min);

    return 0;
}