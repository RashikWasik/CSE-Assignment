#include <stdio.h>

int main()
{
    char a[100];
    int i, n;
    int vowels = 0, consonant = 0, digit = 0, space = 0, special_character = 0;

    printf("Enter a string: ");
    gets(a);

    //n = strlen(a);
    for (n = 0; a[n] != '\0'; n = n+1);

    for (i = 0; i < n; i = i+1)
    {
        if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' ||
                a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        {
            vowels = vowels+1;
        }

        else if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
        {
            consonant = consonant+1;
        }

        else if (a[i] >= '0' && a[i] <= '9')
        {
            digit = digit+1;
        }

        else if (a[i] == ' ')
        {
            space = space+1;
        }

        else
        {
            special_character = special_character+1;
        }
    }

    printf("\nVowels: %d\n", vowels);

    printf("\nConsonants: %d\n", consonant);

    printf("\nDigits: %d\n", digit);

    printf("\nWhite spaces: %d\n", space);

    printf("\nSpecial characters: %d\n", special_character);

    return 0;
}
