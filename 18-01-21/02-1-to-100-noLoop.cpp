#include <iostream>

#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    int c = 0;
    int i = 1;
momo:
    cout << " " << i << " ";
    i++;
    if (i <= 100)
    {
        goto momo;
    }

    return 0;
}