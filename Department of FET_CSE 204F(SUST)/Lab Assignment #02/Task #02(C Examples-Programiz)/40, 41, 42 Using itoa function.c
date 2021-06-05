#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char buffer[20];

    printf("Enter a decimal number: ");
    scanf("%d", &a);

    itoa(a, buffer, 2);   // here 2 means binary
    printf("Binary value = %s\n", buffer);

    itoa(a, buffer, 8);   // here 8 means octal
    printf("Octal value = %s\n", buffer);

    itoa(a, buffer, 16);   // here 16 means hexadecimal
    printf("Hexadecimal value = %s\n", buffer);

    return 0;
}
