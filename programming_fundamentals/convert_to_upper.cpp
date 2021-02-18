#include <stdio.h>
int main()
{
    char string_1[100];
    int i;
    printf(" enter the string ");
    scanf("%string_1", &string_1);
    for (i = 0; string_1[i] != '\0'; i++)

        {
            if (string_1[i] >= 'A' && string_1[i] <= 'Z')
            {
                string_1[i] = string_1[i] + 32;
            }
        }

    printf("\nString in Lower Case = %s ", string_1);
    return 0;
}