#include <stdio.h>
long long int factorial_num(int num);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Factorial of the num %d is  = %ld", num, factorial_num(num));
    return 0;
}

long long int factorial_num(int num)
{
    if (num >= 1)
        return num * factorial_num(num - 1);
    else
        return 1;
}