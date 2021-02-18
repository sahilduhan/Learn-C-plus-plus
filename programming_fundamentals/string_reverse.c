#include <stdio.h>
void reverse_sentence();
int main()
{
    printf("Enter a sentence: ");
    reverse_sentence();
    return 0;
}

void reverse_sentence()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        reverse_sentence();
        printf("%c", c);
    }
}