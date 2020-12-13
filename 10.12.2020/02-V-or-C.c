#include <stdio.h>
#include <string.h>

int main()
{
    char c;
    printf("Enter the char in lowercase : ");
    scanf("%c", &c);

    if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'))
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }

    return 0;
}