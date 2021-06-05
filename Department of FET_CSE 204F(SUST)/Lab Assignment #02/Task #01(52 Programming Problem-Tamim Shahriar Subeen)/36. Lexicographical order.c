#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int j, k, n;
        char str[100][100], temp[100];

        scanf("%d",&n);

        for(j = 0; j < n; j = j+1)
            scanf(" %[^\n]", str[j]);

        for(j = 0; j < n; j = j+1)
        {
            for(k = j+1; k < n ; k = k+1)
            {
                if(strcmp(str[j], str[k])>0)
                {
                    strcpy(temp, str[j]);
                    strcpy(str[j], str[k]);
                    strcpy(str[k], temp);
                }
            }
        }

        for(j = 0; j < n; j = j+1)
        {
            printf ("\n%s", str[j]);
        }

        printf("\n\n\n");
    }

    return 0;
}
