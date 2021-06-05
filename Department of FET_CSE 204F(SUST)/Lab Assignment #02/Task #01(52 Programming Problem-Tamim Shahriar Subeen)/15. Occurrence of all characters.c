#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int j, n, count=0;
        char a[100], b;

        scanf(" %[^\n]", a);

        n = strlen(a);

        for(b = 'a'; b <= 'z'; b = b+1)   //From 'a' to 'z'
        {
            count=0;

            for(j = 0; j < n; j = j+1)
            {
                if (b == a[j])
                    count = count+1;
            }

            if(count == 0)
            {
                continue;
            }

            else
                printf("%c = %d\n",b, count);
        }
    }
    return 0;
}
