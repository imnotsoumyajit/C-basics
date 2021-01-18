#include <iostream>

#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    int size, a[20], b[20], value, check = 0, bs = 0;
    cout << "Enter the size of the array : ";
    cin >> size;
    cout << "Enter the values " << endl;
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %dth value : ", i + 1);
        cin >> a[i];
    }
    cout << "Enter the value you want to delete : ";
    cin >> value;
    for (int i = 0; i < size; i++)
    {
        if (a[i] != value)
        {
            b[bs] = a[i];
            bs++;
            check = 1;
        }
    }
    if (check == 1)
    {
        printf("The new array is : ");
        for (int i = 0; i < size - 1; i++)
        {
            printf(" %d ", b[i]);
        }
    }
    else
    {
        printf("Value not found ");
    }

    return 0;
}