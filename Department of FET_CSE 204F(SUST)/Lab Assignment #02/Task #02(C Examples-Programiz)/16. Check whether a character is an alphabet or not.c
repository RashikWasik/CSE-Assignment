#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("\n%c is an alphabet.\n", ch);

    else
        printf("\n%c is not an alphabet.\n", ch);

    return 0;
}
