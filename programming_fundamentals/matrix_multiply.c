#include <stdio.h>
#include <stdlib.h>
int main()
{
    int frist_matrix[10][10], second_matrix[10][10], multiply[10][10], row, coloum, i, j, k;
    system("cls");
    printf("enter the number of row=");
    scanf("%d", &row);
    printf("enter the number of column=");
    scanf("%d", &coloum);
    printf("enter the first matrix element=\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < coloum; j++)
        {
            scanf("%d", &frist_matrix[i][j]);
        }
    }
    printf("enter the second matrix element=\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < coloum; j++)
        {
            scanf("%d", &second_matrix[i][j]);
        }
    }

    printf("multiply of the matrix=\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < coloum; j++)
        {
            multiply[i][j] = 0;
            for (k = 0; k < coloum; k++)
            {
                multiply[i][j] += frist_matrix[i][k] * second_matrix[k][j];
            }
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < coloum; j++)
        {
            printf("%d\t", multiply[i][j]);
        }
        printf("\n");
    }
    return 0;
}