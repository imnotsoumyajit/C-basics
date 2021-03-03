#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *ptr = NULL;
    char c;
    ptr = fopen("someText.txt", "r");
    if (ptr == NULL)
    {
        printf("FILE NOT FOUND");
        return 0;
    }
    while ((c = fgetc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    return 0;
}