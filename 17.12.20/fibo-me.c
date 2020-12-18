#include <stdio.h>

int main()
{
    int i, n = 5, t1 = 0, t2 = 1, nt;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    printf("The series is : \n");
    printf("%d , %d", t1, t2);
    for (i = 0; i < n; i++)
    {
        nt = t1 + t2;
        printf(" , %d ", nt);
        t1 = t2;
        t2 = nt;
    }

    return 0;
}