#include <stdio.h>
#include <math.h>
int main()
{

double value, n, root;
    printf("enter the value of under root:");
    scanf("%d", &value);
    printf("enter the nth value:");
    scanf("%d", &n);
    root = sqrt(value);
    printf("the value of under root is:", root);
    return 0;
}