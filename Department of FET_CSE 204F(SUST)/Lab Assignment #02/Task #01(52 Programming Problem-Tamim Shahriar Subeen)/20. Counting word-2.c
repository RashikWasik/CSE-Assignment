#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int n, j, count=1;
        char a[100];

        scanf(" %[^\n]", a);

        n = strlen(a);

        for(j = 0; j < n; j = j+1)
        {
            if (a[j]==' ')
            {
                count = count+1;
            }
        }


        printf("Count = %d\n", count);
    }

    return 0;
}
