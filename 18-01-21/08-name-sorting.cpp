#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    char name[10][20];

    int i, j;
    //input
    cout << "Enter 10 Names : \n";
    for (i = 0; i < 10; i++)
    {
        printf("Enter the %dth name : ", i + 1);
        cin >> name[i];
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
    cout << "\n Names Sorted in Alphabetical Order : \n\n";
    for (i = 0; i < 10; i++)
    {
        cout << " ";
        cout << name[i] << "\n";
    }
    getch();
    return 0;
}