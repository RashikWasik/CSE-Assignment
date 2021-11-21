#include <stdio.h>

int main()

{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i = i+1)
    {
        char a[100], b[100];
        int n, i, j, k, l;
        int count = 0;

        scanf(" %s", a);

        scanf(" %s", b);

        for (n = 0; b[n] != '\0'; n = n+1);  //finding length of second string

        for (j = 0, k = 0; a[j] != '\0' && b[k] != '\0'; j = j+1, k = 0)
        {
            for(l = j; l < n+j; l = l+1)
            {
                if (a[l] == b[k])
                {
                    k = k+1;
                }
            }

            if (k == n)
            {
                count = count+1;
            }
        }

        printf("%d\n\n", count);
    }

    return 0;
}
