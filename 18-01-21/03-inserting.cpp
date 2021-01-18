#include <iostream>

#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    int a[20], value, size = 0, valueInArray, check = 0;
    //array
    cout << "Enter the size of the array : ";
    cin >> size;
    cout << "Enter the elements :" << endl;
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %dth value : ", i + 1);
        cin >> a[i];
    }
    //value
    cout << "Enter the value to be inserted: ";
    cin >> value;
    cout << "In which value of the array : ";
    cin >> valueInArray;
    //inserting
    for (int i = 0; i < size; i++)
    {
        int temp;
        if (a[i] == valueInArray)
        {
            temp = a[i];
            a[i] = value;
            a[size] = temp;
            check = 1;
        }
    }
    //print
    if (check == 1)
    {
        cout << "The array is : ";
        for (int i = 0; i <= size; i++)
        {
            cout << " " << a[i] << " ";
        }
    }
    else
    {
        printf("The value in array was not found");
    }

    return 0;
}