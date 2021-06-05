#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i = i+1)
    {
        char a[100];
        int n, j;

        scanf(" %[^\n]", a);

        n = strlen(a);

        for(j = 0; j < n; j = j+1)
        {
            if(a[j] == 'L')
            {
                printf("%c", a[j-1]);
            }

            else if(a[j] == 'R')
            {
                printf("%c", a[j+1]);
            }

            else
            {
                printf("%c", a[j]);
            }
        }

        printf("\n\n");
    }
    return 0;
}
