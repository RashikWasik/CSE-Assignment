// Converting the integer into string

#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    char a[100], b[100];

    printf("Enter integer: ");
    scanf("%d", &n);

    itoa(n, a, 10);   // Converts an integer into a string

    strcpy(b, a);  // Copying input string

    strrev(b);  // Reversing the string

    if (strcmp(a, b) == 0)  // Comparing input string with the reverse string
        printf("\n%d is a palindrome.\n", n);

    else
        printf("\n%d is not a palindrome.\n", n);

    return 0;
}
