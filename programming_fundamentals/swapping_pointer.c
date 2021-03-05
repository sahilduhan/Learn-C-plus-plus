#include <stdio.h>

void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int number_1, number_2;

    printf("Enter value of first number: ");
    scanf("%d", &number_1);
    printf("Enter value of second number: ");
    scanf("%d", &number_2);

    printf("Before : %d, %d\n", number_1, number_2);

    swap(&number_1, &number_2);

    printf("After: %d, %d\n", number_1, number_2);

    return 0;
}