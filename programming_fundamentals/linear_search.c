#include <stdio.h>
int main()
{
    int x;
    int num[] = {1, 21, 45, 236, 7, 756, 8, 4, 7, 88, 5};
    printf("enter the element you want to search:\n");
    scanf("%i", &x);
    for (int i = 0; i < 11; i++)
    {
        if (num[i] == x)
        {
            printf("the element is prresent:%d", x);
            break;
        }
        if (num[i] != x)
        {
            printf("the elment is not present ");
            break;
        }
    }

    return 0;
}