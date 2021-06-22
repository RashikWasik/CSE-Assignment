#include <stdio.h>

int main()
{
    int n, i, count=0;
    char a[100], b;

    printf("Enter a string: ");
    gets(a);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &b);

    //n = strlen(a);
    for (n = 0; a[n] != '\0'; n = n+1);

    for(i=0; i<=n; i=i+1)
    {
        if ( a[i] == b)
        {
            count = count+1;
        }
    }

    if ( count == 0)
    {
        printf("\n'%c' is not present\n", b);
    }

    else
        printf("\nFrequency of %c = %d\n", b, count);

    return 0;
}
