#include <stdio.h>
/*
----1
---22
--333
-4444
55555
*/
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
