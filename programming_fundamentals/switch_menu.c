#include <stdio.h>
int main()
{
    char ord;
    printf("order anything b=burger\n f=french fries\n p=pizza\n s=sandwiches\n");
    scanf("%c", &ord);
    switch (ord)
    {
    case 'b':
        printf("the bill is:200\n");
        break;

    case 'f':
        printf("the bill is:50\n");

        break;
    case 'p':
        printf("the bill is:\n");
        break;
    case 's':
        printf("the bill is:150\n");
        break;
    default:
        printf("wrong input");
    }
}