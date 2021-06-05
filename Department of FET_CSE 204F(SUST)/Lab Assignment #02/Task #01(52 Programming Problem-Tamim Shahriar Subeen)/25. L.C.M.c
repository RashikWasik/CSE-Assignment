#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int a, b, c=1;

        scanf("%d %d", &a, &b);

        while(1)
        {
            if(c%a==0 && c%b==0)
            {
                printf("LCM = %d\n", c);
                break;
            }

            c=c+1;
        }
    }

    return 0;
}
