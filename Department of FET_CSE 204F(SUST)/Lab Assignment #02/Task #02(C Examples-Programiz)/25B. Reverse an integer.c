// Converting the integer into string

#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    char a[100];

    printf("Enter integer: ");
    scanf("%d", &n);

    itoa(n, a, 10);   // Converts an integer into a string

    printf("Reverse of the number is = %s", strrev(a));

    return 0;
}
