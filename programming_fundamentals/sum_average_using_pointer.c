#include <stdio.h>
int average(int *array_avg, int nums);
int main()
{
    int arr_nums[20], *array_avg, nums, i;
    printf("enter number of elements");
    scanf("%d", &nums);
    for (i = 0; i < nums; i++)
    {
        printf("enter %d element", i + 1);
        scanf("%d", &arr_nums[i]);
    }
    array_avg = arr_nums;
    average(array_avg, nums);
}
int average(int *array_avg, int nums)
{
    int i, sum = 0;
    float avg;
    for (i = 0; i < nums; i++)
    {
        sum += *(array_avg + i);
    }
    avg = (float)sum / 6;
    printf("average is %f", avg);
    return avg;
}