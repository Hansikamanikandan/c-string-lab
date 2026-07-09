#include <stdio.h>

int main()
{
    char string[100];
    int i, length = 0, palindrome = 1;

    printf("Enter a string: ");
    gets(string);

    while(string[length] != '\0')
    {
        length++;
    }

    for(i = 0; i < length / 2; i++)
    {
        if(string[i] != string[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome)
        printf("The string is a Palindrome.");
    else
        printf("The string is not a Palindrome.");

    return 0;
}
