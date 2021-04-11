#include <stdio.h>
struct polyAdd
{
    int number;
    int power;
} np[5];

int main()
{
    int a[10][10];
    printf("Enter the highest power of x : ");
    int hp;
    scanf("%d", &hp);
    //entry
    int l = hp;
    printf("Enter the equation :-\n");
    for (int i = hp; i >= 0; i--)
    {
        if (i > 0)
        {
            printf("Enter the value for %d power of x", i);
            scanf("%d", &a[i]);
        }
        else
        {
            printf("Enter the constant : ");
            scanf("%d", &a[i]);
        }
    }

    return 0;
}