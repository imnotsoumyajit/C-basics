#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main()
{
    char name[10][20];
    FILE *ptr = NULL;
    int i, j;
    ptr = fopen("names.txt", "r");
    //first check
    if (ptr == NULL)
    {
        printf("The File was not found ");
        return 0;
    }

    for (i = 0; i < 10; i++)
    {

        fgets(name[i], INT_MAX, ptr); //storing
    }

    //sorting
    for (i = 1; i < 10; i++)
    {
        for (j = 1; j < 10; j++)
        {
            char temp[20];
            if (strcmp(name[j - 1], name[j]) > 0)
            {
                strcpy(temp, name[j - 1]);
                strcpy(name[j - 1], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    //printing
    printf("\n Names Sorted in Alphabetical Order : \n\n");
    for (i = 0; i < 10; i++)
    {
        puts(name[i]);
    }
    fclose(ptr);
    getch();
    return 0;
}