#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter the temp in celsius : ");
    scanf("%f", &celsius);
    fahrenheit = celsius * 9 / 5 + 32;
    printf("The temp in fahrenheit is %.2fF", fahrenheit);

    return 0;
}