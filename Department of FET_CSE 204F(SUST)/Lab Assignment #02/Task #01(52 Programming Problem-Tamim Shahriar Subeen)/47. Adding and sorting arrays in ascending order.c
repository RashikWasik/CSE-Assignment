#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int a[100], b[100];
        int j, k, m, n, temp;

        scanf("%d",&m);

        for(j = 0; j < m; j = j+1)
        {
            scanf("%d", &a[j]);
        }

        scanf("%d",&n);

        for(j = 0; j < n; j = j+1)
        {
            scanf("%d", &b[j]);
        }

        for(j = 0; j < n; j = j+1)
        {
            a[m+j] = b[j]; // Concatenates second array at the end of first array
        }

        for(j = 0; j < m+n; j = j+1)
        {
            for(k = j+1; k < m+n; k = k+1)
            {
                if(a[j] > a[k])
                {
                    temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;
                }
            }
        }

        for(j = 0; j < m+n; j = j+1)
        {
            printf ("%d ", a[j]);
        }

        printf("\n\n");
    }

    return 0;
}
