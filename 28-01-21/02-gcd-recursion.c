#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    int a = 20, b = 30;
    printf("The GCD of the two numbers is : %d", gcd(a, b));
    return 0;
    getch();
}