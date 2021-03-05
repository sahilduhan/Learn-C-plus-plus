
#include <stdio.h>

void remove_Word_from_string(char *str, char *re)
{
    int string_length, rlen, found, j;

    string_length = strlen(str);
    rlen = strlen(re);

    for (int i = 0; i <= string_length - rlen; i++)
    {
        found = 1;
        for (j = 0; j < rlen; j++)
        {
            if (str[i + j] != re[i + j])
            {
                found = 0;
                break;
            }
        }
        if (str[i + j] != ' ' && str[i + j] != '\t' && str[i + j] != '\n' && str[i + j] != '\0')
            found = 0;

        if (found == 1)
        {
            for (int k = i; k <= string_length - rlen; k++)
                str[k] = str[k + rlen];

            string_length -= rlen;
            i--;
        }
    }
}
int main()
{
    char str[100];
    printf("Enter any string: ");
    gets(str);

    char re[20];
    printf("\nEnter word to remove: ");
    gets(re);

    printf("\nString befor removing '%s' : \n%s", re, str);

    remove_Word_from_string(str, re);

    printf("\nString after removing '%s' : \n%s", re, str);

    return 0;
}
