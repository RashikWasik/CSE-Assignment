#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        char a[100], b[100] ;

        scanf(" %[^\n]", a);

        strcpy(b, a);  // Copying input string
        strrev(b);

        if (strcmp(a, b) == 0)  // Comparing input string with the reverse string
            printf("Yes! It is palindrome!\n\n", a);

        else
            printf("Sorry! It is not palindrome!\n\n", a);
    }

    return 0;
}
