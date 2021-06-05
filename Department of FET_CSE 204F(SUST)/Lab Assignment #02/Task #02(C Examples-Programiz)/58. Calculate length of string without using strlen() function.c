#include <stdio.h>
int main()
{
    int i;
    char a[100];

    printf("Enter string: ");
    gets(a);

    for (i = 0; a[i] != '\0'; ++i);

    printf("\nLength of the string: %d\n", i);

    return 0;
}
