#include <stdio.h>
int main()
{
    int num, factorial;
    printf("enter the value:/n");
    cin("%i", &num);
    if (num == 1)
        return num;
    if (num != 1)
        return num * fact(num - 1);
    return 0;
}