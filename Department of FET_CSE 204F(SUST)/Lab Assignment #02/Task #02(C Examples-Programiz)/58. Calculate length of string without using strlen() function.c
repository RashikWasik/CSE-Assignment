#include <stdio.h>

int main()
{
    int n;
    char a[100];

    printf("Enter a string: ");
    gets(a);

    for (n = 0; a[n] != '\0'; n = n+1);

    printf("\nLength of the string = %d\n", n);

    return 0;
}
