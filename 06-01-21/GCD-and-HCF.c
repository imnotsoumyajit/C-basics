//of two numbers
#include <stdio.h>

int main()
{
    int a, b, GCD = 1;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            GCD = i;
        }
    }
    printf("GCD is %d", GCD);

    return 0;
}