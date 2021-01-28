#include <iostream>
#include <stdio.h>
int main()
{
    int first_term, second_term, next_term, n;
    printf("enter the value upto which you want to print:\n");
    scanf("%i", &n);
    printf("the series is:\n");
    for (int i = 1; i < n; i++)
    {
        printf("%d, ", first_term);
        first_term = second_term;
        second_term = next_term;
        next_term = first_term + second_term;
    }

    return 0;
}