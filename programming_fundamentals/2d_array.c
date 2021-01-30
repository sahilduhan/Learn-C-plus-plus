#include <stdio.h>
int main()
{
    int row, coloum;
    int arr[3][3];
    for (int i = 0; i < 3; i++)

    {
        for (int j = 0; j < 3; j++)

        {
            printf("enter the elments:\n");
            scanf("%d ", arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)

        {
            printf(" %d ", arr[i][j]);
        }
    }

    return 0;
}