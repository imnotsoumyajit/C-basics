#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

//my function
bool compare(char a[10], char b[10])
{
    int i = 0, j = 0, check = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    while (b[j] != '\0')
    {
        j++;
    }
    if (i != j)
    {
        check = 0;
    }
    else
    {
        for (i = 0, j = 0; a[i] != '\0', b[j] != '\0'; i++, j++)
        {
            if (a[i] == b[j])
            {
                check = 1;
            }
        }
    }
    if (check == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

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
            if (compare(name[j - 1], name[j]))
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