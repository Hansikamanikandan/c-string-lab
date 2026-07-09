#include <stdio.h>

int main()
{
    char str[100], character;
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the character to search: ");
    scanf("%c", &character);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == character)
        {
            count++;
        }
    }

    printf("Occurrence of '%c' = %d", character, count);

    return 0;
}
