#include <stdio.h>

int main()
{
    int n = 1, a = 1, b = 1, c = 1;

    printf("How many numbers eh ? : ");
    scanf("%d", &n);
    c = n;
    if (n > 0)
    {
        printf("Enter 1st number : ");
        scanf("%d", &a);
        n--;
        if (n > 0)
        {
            while (n >= 1)
            {
                printf("Enter next number : ");
                scanf("%d", &b);
                if (a < b)
                {
                    a = b;
                }
                n--;
            }
        }
    }
    printf("\nThe largest number is : %d", a);

    return 0;
}