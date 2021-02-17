#include <stdio.h>
#include <conio.h>

int main()
{
    int c = 4;
    for (int i = 1; i <= 7; i += 2)
    {
        for (int k = c; k >= 1; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        c--;
    }
    getch();
    return 0;
}