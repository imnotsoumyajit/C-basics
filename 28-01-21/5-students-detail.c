#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{

    struct students
    {
        char name[20];
        int roll;
        float percentage;
    } s[5];
    //entry
    printf("Enter the details : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("For Student number %d :- \n", i + 1);
        printf("Enter roll : ");
        scanf("%d", &s[i].roll);
        printf("Enter Name : ");
        scanf("%s", s[i].name);
        printf("Enter percentage : ");
        scanf("%f", &s[i].percentage);
        printf("\n");
    }
    //output
    printf("Press any key to view the details ");
    getch();
    system("cls");
    printf("The details : \n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("For the Student number %d :- \n", i + 1);
        printf("Name : ");
        puts(s[i].name);
        printf("Roll : %d\n", s[i].roll);
        printf("percentage : %f\n", s[i].percentage);
        printf("\n");
    }
    getch();
    return 0;
}