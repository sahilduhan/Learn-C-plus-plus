#include <stdio.h>
#include <string.h>
int main()
{
    char string_1[20];
    char string_2[20];
    int check_val;
    printf("Enter the first string : ");
    scanf("%s", string_1);
    printf("Enter the second string : ");
    scanf("%s", string_2);

    check_val = strcmp(string_1, string_2);
    if (check_val == 0)
        printf(" same ");
    else
        printf(" not same ");
    return 0;
}