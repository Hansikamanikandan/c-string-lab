#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }

    printf("Uppercase String: %s", str);

    return 0;
}
