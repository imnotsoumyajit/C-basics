#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];

    printf("Enter the string : ");
    gets(s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    printf("\nString in Upper Case = %s", s);
    return 0;
}