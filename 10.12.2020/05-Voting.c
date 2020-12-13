#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Age : ");
    scanf("%d", &n);
    if (n >= 18)
    {
        printf("Eligible");
    }
    else
    {
        printf("Not Eligible");
    }

    return 0;
}
