#include <stdio.h>

int main()

{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i = i+1)
    {
        int j, n, count=0;
        char a[100];

        scanf(" %[^\n]", a);

        n = strlen(a);

        for(j = 0; j < n; j = j+1)
        {
            if (a[j] =='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u')
            {
                printf("%c",a[j]);
            }
        }

        printf("\n");

        for(j = 0; j < n; j = j+1)
        {
            if (a[j] =='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u'|| a[j]==' ')
            {
                continue;
            }

            else
            {
                printf("%c",a[j]);
            }
        }

        printf("\n");
    }

    return 0;
}
