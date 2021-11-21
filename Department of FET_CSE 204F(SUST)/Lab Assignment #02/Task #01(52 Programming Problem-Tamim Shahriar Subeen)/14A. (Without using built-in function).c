#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int n, j, count=0;
        char a[10001], b[2];

        scanf(" %[^\n]", a);

        scanf("%s", b);

        for (n = 0; a[n] != '\0'; n = n+1);

        for(j=0; j<n; j=j+1)
        {
            if ( a[j] == b[0])
            {
                count = count+1;
            }
        }

        if ( count == 0 )
        {
            printf("'%c' is not present\n", b[0]);
        }

        else
            printf("Occurrence of '%c' in '%s' = %d\n", b[0], a, count);

        printf("\n");
    }

    return 0;
}
