#include <stdio.h>
int main()
{
    char first_char, second_char;
    printf("enter the first character value:");
    scanf("%c", &first_char);
    printf("enter the second char value:");
    scanf("%d", &second_char);
    first_char = first_char + second_char;
    second_char = first_char - second_char;
    first_char = first_char - second_char;
    printf("the altered values are: %c and %c", first_char, second_char);

    return 0;
}