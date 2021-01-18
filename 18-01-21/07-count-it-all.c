#include <stdio.h>
#include <string.h>

int main()
{
    char s[30];
    char toFind;
    int c = 0;

    printf("Enter the string : ");
    gets(s);

    printf("\nEnter the char : ");
    scanf("%c", &toFind);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == toFind)
        {
            c++;
        }
    }

    printf("\nThe char is present %d times ", c);

    return 0;
}