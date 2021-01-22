#include <stdio.h>
int main()
{
    char operator;
    double first, second, sum, product, division, subtraction;
    printf("enter the operator:(+,-,*,/) ");
    scanf("%c", operator);
    printf("enter the first and second value: ");
    scanf(" %d %d", &first, &second);
    sum = first + second;
    product = first * second;
    division = first / second;
    subtraction = first - second;

    switch (operator)
    {
    case '*':
        printf("the product is: ", sum);
        break;
    case '+':
        printf("the sum is:\n", sum);
        break;
    case '-':
        printf("the diffrence is:\n", subtraction);
        break;
    case '/':
        printf("the division is:\n", division);
        break;
    default:
        printf("error");
    }
    return 0;
}