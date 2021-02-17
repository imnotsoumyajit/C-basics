#include <stdio.h>
#include <conio.h>

int main()
{
    int c = 4;
    //upper
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
    //lower
    int c1 = 1;
    for (int i = 7; i >= 1; i -= 2)
    {
        for (int k = c1; k >= 1; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        c1++;
    }
    getch();
    return 0;
}