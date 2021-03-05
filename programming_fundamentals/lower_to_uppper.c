#include <stdio.h>
#include <conio.h>
int main()
{
    char lowerString[50] = "", upperString[50] = "";
    int i = 0;
    printf("Enter a lowercase String: ");
    gets(lowerString);
    while (lowerString[i] != '\0')
    {
        upperString[i] = lowerString[i] - 32;
        i++;
    }
    printf("\n the  Uppercase = %s", upperString);
    getch();
    return 0;
}