#include <stdio.h>
#include <string.h>

int main()

{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i = i+1)
    {
        char a[100], b[100];
        char *sub;

        scanf(" %s", a);

        scanf(" %[^\n]", b);

        sub = strstr(a, b);

        printf("%d\n\n", sub-a);
    }

    return 0;
}
