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
                count = count+1;
            }

        }

        printf("Number of vowels = %d\n", count);
    }

    return 0;
}
