#include <stdio.h>
int main()
{
    int i, j, row, coloum, first_matrix[100][100], second_matrix[100][100], sum[100][100];
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &row);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &coloum);
    if (row != coloum)
    {
        printf("matrix additon not possible");
    }
    else
    {

        printf("\nEnter elements of 1st matrix:\n");

        for (i = 0; i < row; ++i)
            for (j = 0; j < coloum; ++j)
            {
                printf("Enter element a%d%d: ", i + 1, j + 1);
                scanf("%d", &first_matrix[i][j]);
            }

        printf("Enter elements of 2nd matrix:\n");
        for (i = 0; i < row; ++i)
            for (j = 0; j < coloum; ++j)
            {
                printf("Enter element a%d%d: ", i + 1, j + 1);
                scanf("%d", &second_matrix[i][j]);
            }

        for (i = 0; i < row; ++i)
            for (j = 0; j < coloum; ++j)
            {
                sum[i][j] = first_matrix[i][j] + second_matrix[i][j];
            }

        printf("\nSum of two matrices: \n");
        for (i = 0; i < row; ++i)
            for (j = 0; j < coloum; ++j)
            {
                printf("%d   ", sum[i][j]);
                if (j == coloum - 1)
                {
                    printf("\n\n");
                }
            }
    }
    return 0;
}