#include <stdio.h>
struct polyAdd
{
    int number;
    int power;
} np1[10], np2[10];

int main()
{
    printf("Enter the number of equations : ");
    int numberOfEquations;
    scanf("%d", numberOfEquations);

    for (int i = 1; i <= numberOfEquations; i++)
    {
        printf("For %dth equation :-\n\n", i);
        printf("Enter the highest power of x : ");
        scanf("%d", &np1[i].power);
        //entry
        int l = np1[i].power;
        printf("Enter the equation :-\n");
        for (int j = np1[i].power; j >= 0; j--)
        {
            if (j > 0)
            {
                printf("Enter the value for %d power of x", j);
                scanf("%d", &np1[i].number);
            }
            else
            {
                printf("Enter the constant : ");
                scanf("%d", &np1[i].number);
            }
        }

        return 0;
    }