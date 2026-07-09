#include <stdio.h>

int main()
{
    char str[100];
    int i;
    int characters = 0, words = 1, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        characters++;

        if(str[i] == ' ')
        {
            words++;
        }
        else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
                str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vowels++;
        }
        else if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        {
            consonants++;
        }
    }

    printf("Characters = %d\n", characters);
    printf("Words = %d\n", words);
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}
