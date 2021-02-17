#include <stdio.h>
#include <string.h>

int main()
{
    char c[] = "ABCD";
    for (int i = 0; c[i] != '\0'; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", c[j]);
        }
        printf("\n");
    }
    for (int i = 3; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", c[j]);
        }
        printf("\n");
    }

    return 0;
}