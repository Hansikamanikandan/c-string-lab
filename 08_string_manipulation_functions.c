#include <stdio.h>
#include <string.h>

int main()
{
    char string1[100], string2[100];

    printf("Enter first string: ");
    gets(string1);

    printf("Enter second string: ");
    gets(string2);

    printf("\nLength of First String = %lu", strlen(string1));
    printf("\nLength of Second String = %lu", strlen(string2));

    printf("\n\nCopied String = %s", strcpy(string2, string1));

    printf("\n\nConcatenated String = %s", strcat(string1, string2));

    if(strcmp(string1, string2) == 0)
        printf("\n\nStrings are Equal");
    else
        printf("\n\nStrings are Not Equal");

    return 0;
}
