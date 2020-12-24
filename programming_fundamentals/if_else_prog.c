#include <stdio.h>
int main()
{
    int num;
    printf("enter the value:");
    scanf("%i", &num);
    if (num % 2 == 0)
    {
        printf("the vlaue is even");
    }
    else
    {
        printf("the vlaue id odd ");
    }

    return 0;
}