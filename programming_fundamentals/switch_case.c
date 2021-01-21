#include <stdio.h>
int main()
{
    char operator;
    double first, second;
    printf("enter the operator:(+,-,*,/) ");
    scanf("%c", operator);
    printf("enter the first and second value: ");
    scanf(" %d %d", &first, &second);
    switch (operator)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");

        return 0;
    }