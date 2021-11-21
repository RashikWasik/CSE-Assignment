#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        char a[101], n;

        scanf(" %[^\n]", &a);

         for (n = 0; a[n] != '\0'; n = n+1);

        if (a[n-1]%2 != 0)   // a[n-1] - last character of the string
            printf("odd\n");

        else
            printf("even\n");
    }

    return 0;
}
