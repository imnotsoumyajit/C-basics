#include <stdio.h>

int main()
{
    float salary, Dallow, houseRent, GrossSal;
    printf("Enter salary : ");
    scanf("%f", &salary);
    Dallow = 0.4 * salary;
    houseRent = 0.2 * salary;
    GrossSal = salary + Dallow + houseRent;
    printf("Gross Salary : %.2f", GrossSal);

    return 0;
}