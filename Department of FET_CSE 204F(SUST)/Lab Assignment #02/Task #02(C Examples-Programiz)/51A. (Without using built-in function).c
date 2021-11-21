#include <stdio.h>

int main()

{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i = i+1)
    {
        char a[100], b[100];
        int i, j;

        scanf(" %s", a);

        scanf(" %s", b);

        for (i = 0, j = 0; a[i] != '\0' && b[j] != '\0'; i++)
        {
            if (a[i] == b[j])
            {
                j++;
            }
        }

        printf("%d\n\n", i - j);
    }

    return 0;
}
