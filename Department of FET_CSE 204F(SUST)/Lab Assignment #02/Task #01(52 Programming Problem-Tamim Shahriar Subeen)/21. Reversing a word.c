#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        char a[100];

        scanf(" %[^\n]", a);

        printf("%s\n", strrev(a));
    }

    return 0;
}
