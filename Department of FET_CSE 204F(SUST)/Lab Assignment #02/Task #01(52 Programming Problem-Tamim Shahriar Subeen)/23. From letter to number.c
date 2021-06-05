#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int n, j;
        char a[100];

        scanf(" %[^\n]", a);

        n = strlen(a);

        for(j=0; j<n; j=j+1)
            printf("%d", a[j]-64);

        printf("\n");
    }

    return 0;
}
