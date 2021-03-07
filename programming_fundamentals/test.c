#include <stdio.h>
#include <string.h>

int main()
{
    char string_val[1000] = "The passive voice for shut the door would be 'Let the door be shut'.", del_val[] = "the", new_array[10][30];
    int i = 0, j = 0, k = 0, len1 = 0, len2 = 0;

    // converting string to an 2D array
    printf("this programme belongs to sahil duhan 2k20/b9/12\n");
    printf("the string after removing the word is :\n");
    for (i = 0; string_val[i] != '\0'; i++)
    {
        if (string_val[i] == ' ')
        {
            new_array[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            new_array[k][j] = string_val[i];
            j++;
        }
    }

    new_array[k][j] = '\0';

    j = 0;
    for (i = 0; i < k + 1; i++)
    {
        if (strcmpi(new_array[i], del_val) == 0)
        {
            new_array[i][j] = 'a';
        }
    }

    j = 0;

    for (i = 0; i < k + 1; i++)
    {
        if (new_array[i][j] == 'a')
            continue;
        else
            printf("%s ", new_array[i]);
    }

    printf("\n");

    return 0;
}