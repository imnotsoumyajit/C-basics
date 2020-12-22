#include <stdio.h>
/*
----5
---44
--333
-4444
55555
*/
int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (int j = 5; j >= i; j--)
        {
            if (i == 2)
                printf("%d", 4);
            else
                printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
