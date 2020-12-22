#include <stdio.h>
/*
5
44
333
2222
11111
*/
int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
