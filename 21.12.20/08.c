#include <stdio.h>
/*
5
45
345
2345
12345
*/
int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
