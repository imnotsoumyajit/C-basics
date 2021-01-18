#include <iostream>
//#include <bits/stdc++.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    int a[20], b[20], c[50];
    int k = 0, i;
    int size1 = 0, size2 = 0, sizeSum = 0;
    //Input
    cout << "Tip : Dont give the size more than 20 please " << endl
         << endl;
    cout << "Enter size of first element : ";
    cin >> size1;
    cout << "Enter size of second element : ";
    cin >> size2;
    cout << "Enter the elements" << endl;
    cout << "For First" << endl;
    for (i = 0; i < size1; i++)
    {
        printf("Enter the %dth element : ", i + 1);
        cin >> a[i];
        c[i] = a[i];
    }
    k = i;
    cout << "For Second" << endl;
    for (i = 0; i < size2; i++)
    {
        printf("Enter the %dth element : ", i + 1);
        cin >> b[i];
        c[k] = b[i];
        k++;
    }
    //sorting
    sizeSum = size1 + size2;
    for (i = 0; i < sizeSum; i++)
    {
        for (int j = i + 1; j < sizeSum; j++)
        {
            int temp;
            if (c[j] < c[i])
            {
                temp = c[j];
                c[j] = c[i];
                c[i] = temp;
            }
        }
    }
    //Printing
    cout << "The sorted array is : ";
    for (i = 0; i < sizeSum; i++)
    {
        printf(" %d ", c[i]);
    }

    return 0;
}