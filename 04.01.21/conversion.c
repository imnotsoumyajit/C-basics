/*
Binary 
Octal
Decimal
Hexa-Decimal
*/
#include <stdio.h>

int main()
{
    int choice = 1, number = 2, b, o, hd, q, d, i = 1, j, a[20], n;
    char HDnum[50];

    printf("Enter the number in decimal : ");
    scanf("%d", &number);
    printf("1 for Binary \n2 for Octal \n3 for Decimal \n4 for Hexa-Decimal \n");
    printf("To what : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        i = 0;
        while (n > 0)
        {
            b = n % 2;
            n = n / 2;
            a[i++] = b;
        }
        printf("In Binary : ");
        for (j = i - 1; j >= 0; j--)
        {
            printf("%d", a[j]);
        }
        printf("\n");
        break;
    case 2:
        printf("In octal : %o", number);
        break;
    case 3:
        printf("Decimal h hai bhai !");
        break;
    case 4:
        i = 1;
        q = number;
        while (q != 0)
        {
            d = q % 16;
            if (d < 10)
                d = d + 48;
            else
                d = d + 55;
            HDnum[i++] = d;
            q = q / 16;
        }
        printf(" The equivalent hexadecimal value of decimal number is :");
        for (b = i - 1; b > 0; b--)
            printf("%c", HDnum[b]);
        break;
    default:
        printf("Tu chord de pardhari bhai !");
        break;
    }

    return 0;
}
