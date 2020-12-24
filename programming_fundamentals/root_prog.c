#include <stdio.h>
#include <math.h>
int main()
{

double value, n, root,b;
    printf("enter the value of under root:");
    scanf("%d", &value);
    printf("enter the nth value:");
    scanf("%d", &n);
    b=1/n;
    root = pow(value,b);
    printf("the value of under root is:%d", root);
    return 0;
}