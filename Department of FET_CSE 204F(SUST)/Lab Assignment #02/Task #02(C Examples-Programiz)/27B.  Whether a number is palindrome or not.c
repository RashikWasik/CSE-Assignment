// Taking input as a string

#include <stdio.h>

int main()
{
    char a[100], b[100] ;

    printf("Enter a string: ");
    gets(a);

    strcpy(b, a);  // Copying input string
    strrev(b);

    if (strcmp(a, b) == 0)  // Comparing input string with the reverse string
        printf("\n%s is a palindrome.\n", a);

    else
        printf("\n%s is not a palindrome.\n", a);

    return 0;
}
