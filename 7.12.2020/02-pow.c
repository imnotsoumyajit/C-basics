#include <stdio.h>

int main()
{
    int n, p1, p2, p3, d;
    printf("Enter the 3 Digit number : ");
    scanf("%d", &n);
    d = n % 10;
    p3 = d * d;
    n = n / 10;
    d = n % 10;
    p2 = d * d;
    n = n / 10;
    d = n % 10;
    p1 = d * d;
    n = n / 10;
    printf("The power of 1st 3 digit is : ( %d , %d , %d )", p1, p2, p3);

    return 0;
}