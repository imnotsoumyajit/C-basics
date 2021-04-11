#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], multi[3][3];
    //first
    printf("Enter the first matrix :-\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the %d %d th element : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n");
    //Second
    printf("Enter the second matrix :-\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the %d %d th element : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n\n");

    //multi
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            multi[i][j] = 0;
            int k = 0;
            while (k < 3)
            {
                multi[i][j] += a[i][j] * b[i][j];
                k++;
            }
        }
    }
    printf("\n\n");
    //print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", multi[i][j]);
        }
        printf("\n");
    }
    return 0;
}