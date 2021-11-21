#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        char a[100];
        int n, j;

        scanf(" %[^\n]", a);

        for (n = 0; a[n] != '\0'; n = n+1);

        for(j = n-1; j >= 0; j = j-1)   // Reverses the string
        {
            printf("%c", a[j]);
        }

        printf("\n\n");
    }

    return 0;
}
