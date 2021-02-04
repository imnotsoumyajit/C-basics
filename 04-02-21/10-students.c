#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    printf("NOTE: 100 students is the limit \n\n");
    printf("Enter the number of students : ");
    int n = 10;
    scanf("%d", &n);
    fflush(stdin);
    printf("Press any key to continue...");
    getch();
    system("cls");
    struct students
    {
        char name[20];
        int roll;
        float marks;
    } s[100];
    //entry
    printf("Enter the details : \n\n");
    for (int i = 0; i < n; i++)
    {
        printf("For Student number %d :- \n", i + 1);
        printf("Enter roll : ");
        scanf("%d", &s[i].roll);
        fflush(stdin);
        printf("Enter Name : ");
        scanf("%s", s[i].name);
        fflush(stdin);
        printf("Enter marks : ");
        scanf("%f", &s[i].marks);
        fflush(stdin);
        printf("\n");
    }
    //Sorting
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (s[i].marks < s[j].marks)
            {
                //marks
                float tempMarks;
                tempMarks = s[i].marks;
                s[i].marks = s[j].marks;
                s[j].marks = tempMarks;
                //name
                char tempName[50];
                strcpy(tempName, s[i].name);
                strcpy(s[i].name, s[j].name);
                strcpy(s[j].name, tempName);
                //roll
                int tempRoll;
                tempRoll = s[i].roll;
                s[i].roll = s[j].roll;
                s[j].roll = tempRoll;
            }
        }
    }

    //output
    printf("Press any key to view the details ");
    getch();
    system("cls");
    printf("The details : \n\n");
    for (int i = 0; i < n; i++)
    {
        printf("The Student with rank number %d has  :- \n", i + 1);
        printf("Name : ");
        puts(s[i].name);
        printf("Roll : %d\n", s[i].roll);
        printf("Marks : %.2f\n", s[i].marks);
        printf("\n");
    }
    getch();
    return 0;
}