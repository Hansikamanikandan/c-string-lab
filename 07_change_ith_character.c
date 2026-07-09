#include <stdio.h>

int main()
{
    char str[100], character;
    int position;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the position: ");
    scanf("%d", &position);

    printf("Enter the new character: ");
    scanf(" %c", &character);

    str[position - 1] = character;

    printf("Modified String = %s", str);

    return 0;
}
