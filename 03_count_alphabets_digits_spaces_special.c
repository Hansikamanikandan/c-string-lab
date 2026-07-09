#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;
    int alphabets = 0, digits = 0, spaces = 0, special = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(isalpha(str[i]))
            alphabets++;
        else if(isdigit(str[i]))
            digits++;
        else if(str[i] == ' ')
            spaces++;
        else
            special++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);
    printf("Special Characters = %d\n", special);

    return 0;
}
