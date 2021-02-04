#include <stdio.h>
int main()
{
    printf("SAHIL DUHAN-2K20/B9/12 ");
    int Sum = 0, i, _N;

    printf("\n Value of N is - ");//input of maximum value upto which the perfect number is to be evaluated
    scanf("%d", &_N);

    printf("\n Perfect Number from %d and %d are  ", 1, _N);// a perfect number is a positive integer that is equal to the sum of its positive divisorsF
    for (int num = 1; num <= _N; num++)//loop itrating from intial value to the max value
    {
        for (i = 1, Sum = 0; i < num; i++)
        {
            if (num % i == 0)
                Sum = Sum + i;//condition check
        }
        if (Sum == num)
            printf("%d \n", num);
    }
    return 0;
}