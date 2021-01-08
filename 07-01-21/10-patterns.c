
//AGAR KOI ISKO COPY PASTE KRNE KA TRY KIYA>>>TOH BHAI MERI BADUAAYEE TEKO !!

#include <stdio.h>
#include <conio.h>

/*
void choice1();
void choice2();
void choice3();
void choice4();
void choice5();
void choice6();
void choice7();
void choice8();
void choice9();
void choice10();
*/

//1st
void choice1()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (int j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
//2nd
void choice2()
{
    for (int i = 5; i >= 1; i--)
    {

        for (int k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (int j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
//3rd
void choice3()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (int j = 5; j >= i; j--)
        {
            if (i == 2)
                printf("%d", 4);
            else
                printf("%d", i);
        }
        printf("\n");
    }
}
//4th
void choice4()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
//5th
void choice5()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
//6th
void choice6()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
//7th
void choice7()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
//8th
void choice8()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
//9th
void choice9()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
//10th
void choice10()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}

int main()
{
    int choice = 1, n = 1;
    int c = 1;
    printf("Welcome mate ! \n");
GOGO:
    printf("There are 10 patterns here , choose from 1 to 10 \n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        choice1();
        break;
    case 2:
        choice2();
        break;
    case 3:
        choice3();
        break;
    case 4:
        choice4();
        break;
    case 5:
        choice5();
        break;
    case 6:
        choice6();
        break;
    case 7:
        choice7();
        break;
    case 8:
        choice8();
        break;
    case 9:
        choice9();
        break;
    case 10:
        choice10();
        break;
    default:
        printf("Number kya hota hai seekh le bhai...\n");
        break;
    }
ZOZO:
    printf("Do you want to continue ( 1 for yes and 2 for no ) : ");
    scanf("%d", &c);

    if (c == 1)
    {
        //clrscr();
        goto GOGO;
    }
    else if (c == 2)
    {
        printf("cool...\n");
    }
    else
    {
        printf("Idiot !...choose again \n");
        goto ZOZO;
    }

    printf("Bye mate ! ...just click any key ");
    getch();
    return 0;
}
