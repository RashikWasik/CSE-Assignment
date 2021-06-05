#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);


    /* Condition for vowel */
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("'%c' is Vowel.", ch);
    }

    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        /* Condition for consonant */
        printf("'%c' is Consonant.", ch);
    }

    else //If it's neither vowel nor consonant
    {
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;
}
