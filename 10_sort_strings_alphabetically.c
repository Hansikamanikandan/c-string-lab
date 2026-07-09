#include <stdio.h>
#include <string.h>

int main()
{
    char strings[20][100], temp[100];
    int numberOfStrings, i, j;

    printf("Enter the number of strings: ");
    scanf("%d", &numberOfStrings);
    getchar();

    printf("Enter the strings:\n");

    for(i = 0; i < numberOfStrings; i++)
    {
        gets(strings[i]);
    }

    for(i = 0; i < numberOfStrings - 1; i++)
    {
        for(j = i + 1; j < numberOfStrings; j++)
        {
            if(strcmp(strings[i], strings[j]) > 0)
            {
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }

    printf("\nStrings in Alphabetical Order:\n");

    for(i = 0; i < numberOfStrings; i++)
    {
        printf("%s\n", strings[i]);
    }

    return 0;
}
