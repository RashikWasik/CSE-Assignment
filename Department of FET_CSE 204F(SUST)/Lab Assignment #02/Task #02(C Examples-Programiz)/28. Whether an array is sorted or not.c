#include <stdio.h>

int main()
{

        int a[1000], j, n, flag1 = 0, flag2 = 0;

        scanf("%d",&n);

        for(j = 0; j < n; j = j+1)
        {
            scanf("%d", &a[j]);
        }

        for(j=1; j < n; j=j+1)
        {
            if (a[j] > a[j-1]) // Checks if in ascending order
            {
                continue;
            }

            else
            {
                flag1 = 1;
                break;
            }

        }

        for(j=1; j < n; j=j+1)
        {
            if (a[j] < a[j-1])  // Checks if in descending order
            {
                continue;
            }

            else
            {
                flag2 = 1;
                break;
            }

        }

        if(flag1 == 1 && flag2 == 1)
            printf("No\n");

        else
        {
            printf("Yes\n");
        }

    return 0;
}
